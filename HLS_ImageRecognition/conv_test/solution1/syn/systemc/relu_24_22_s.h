// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_24_22_s_HH_
#define _relu_24_22_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "test_hcmp_16ns_16g8j.h"
#include "test_mul_mul_10nsncg.h"

namespace ap_rtl {

struct relu_24_22_s : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<14> > in_r_address0;
    sc_out< sc_logic > in_r_ce0;
    sc_in< sc_lv<16> > in_r_q0;
    sc_out< sc_lv<14> > out_r_address0;
    sc_out< sc_logic > out_r_ce0;
    sc_out< sc_logic > out_r_we0;
    sc_out< sc_lv<16> > out_r_d0;
    sc_signal< sc_lv<16> > ap_var_for_const0;
    sc_signal< sc_lv<5> > ap_var_for_const1;


    // Module declarations
    relu_24_22_s(sc_module_name name);
    SC_HAS_PROCESS(relu_24_22_s);

    ~relu_24_22_s();

    sc_trace_file* mVcdFile;

    test_hcmp_16ns_16g8j<1,1,16,16,1>* test_hcmp_16ns_16g8j_U40;
    test_mul_mul_10nsncg<1,1,10,6,14>* test_mul_mul_10nsncg_U41;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > add_ln96_fu_104_p2;
    sc_signal< sc_lv<10> > add_ln96_reg_187;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<5> > m_fu_116_p2;
    sc_signal< sc_lv<5> > m_reg_195;
    sc_signal< sc_lv<5> > r_fu_128_p2;
    sc_signal< sc_lv<5> > r_reg_203;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<14> > mul_ln99_fu_181_p2;
    sc_signal< sc_lv<14> > mul_ln99_reg_208;
    sc_signal< sc_lv<1> > icmp_ln97_fu_122_p2;
    sc_signal< sc_lv<5> > c_fu_154_p2;
    sc_signal< sc_lv<5> > c_reg_216;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln99_6_fu_169_p1;
    sc_signal< sc_lv<64> > zext_ln99_6_reg_221;
    sc_signal< sc_lv<1> > icmp_ln98_fu_148_p2;
    sc_signal< sc_lv<16> > in_load_reg_231;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<16> > select_ln99_fu_174_p3;
    sc_signal< sc_lv<16> > select_ln99_reg_237;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<5> > m_0_reg_54;
    sc_signal< sc_lv<10> > phi_mul_reg_65;
    sc_signal< sc_lv<5> > r_0_reg_77;
    sc_signal< sc_lv<1> > icmp_ln96_fu_110_p2;
    sc_signal< sc_lv<5> > c_0_reg_88;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<10> > zext_ln99_fu_134_p1;
    sc_signal< sc_lv<10> > add_ln99_fu_138_p2;
    sc_signal< sc_lv<14> > zext_ln99_5_fu_160_p1;
    sc_signal< sc_lv<14> > add_ln99_2_fu_164_p2;
    sc_signal< sc_lv<1> > tmp_fu_99_p2;
    sc_signal< sc_lv<10> > mul_ln99_fu_181_p0;
    sc_signal< sc_lv<6> > mul_ln99_fu_181_p1;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< sc_lv<14> > mul_ln99_fu_181_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<10> ap_const_lv10_16;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_16;
    static const sc_lv<14> ap_const_lv14_16;
    static const sc_lv<5> ap_const_lv5_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_add_ln96_fu_104_p2();
    void thread_add_ln99_2_fu_164_p2();
    void thread_add_ln99_fu_138_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_fu_154_p2();
    void thread_icmp_ln96_fu_110_p2();
    void thread_icmp_ln97_fu_122_p2();
    void thread_icmp_ln98_fu_148_p2();
    void thread_in_r_address0();
    void thread_in_r_ce0();
    void thread_m_fu_116_p2();
    void thread_mul_ln99_fu_181_p0();
    void thread_mul_ln99_fu_181_p00();
    void thread_mul_ln99_fu_181_p1();
    void thread_out_r_address0();
    void thread_out_r_ce0();
    void thread_out_r_d0();
    void thread_out_r_we0();
    void thread_r_fu_128_p2();
    void thread_select_ln99_fu_174_p3();
    void thread_zext_ln99_5_fu_160_p1();
    void thread_zext_ln99_6_fu_169_p1();
    void thread_zext_ln99_fu_134_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

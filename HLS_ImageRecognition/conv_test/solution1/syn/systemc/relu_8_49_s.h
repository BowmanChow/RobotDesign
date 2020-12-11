// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_8_49_s_HH_
#define _relu_8_49_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "test_hcmp_16ns_16g8j.h"

namespace ap_rtl {

struct relu_8_49_s : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<15> > in_r_address0;
    sc_out< sc_logic > in_r_ce0;
    sc_in< sc_lv<16> > in_r_q0;
    sc_out< sc_lv<15> > out_r_address0;
    sc_out< sc_logic > out_r_ce0;
    sc_out< sc_logic > out_r_we0;
    sc_out< sc_lv<16> > out_r_d0;
    sc_signal< sc_lv<16> > ap_var_for_const0;
    sc_signal< sc_lv<5> > ap_var_for_const1;


    // Module declarations
    relu_8_49_s(sc_module_name name);
    SC_HAS_PROCESS(relu_8_49_s);

    ~relu_8_49_s();

    sc_trace_file* mVcdFile;

    test_hcmp_16ns_16g8j<1,1,16,16,1>* test_hcmp_16ns_16g8j_U12;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > add_ln96_fu_108_p2;
    sc_signal< sc_lv<9> > add_ln96_reg_191;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > m_fu_120_p2;
    sc_signal< sc_lv<4> > m_reg_199;
    sc_signal< sc_lv<6> > r_fu_132_p2;
    sc_signal< sc_lv<6> > r_reg_207;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<15> > mul_ln99_fu_152_p2;
    sc_signal< sc_lv<15> > mul_ln99_reg_212;
    sc_signal< sc_lv<1> > icmp_ln97_fu_126_p2;
    sc_signal< sc_lv<6> > c_fu_164_p2;
    sc_signal< sc_lv<6> > c_reg_220;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln99_3_fu_179_p1;
    sc_signal< sc_lv<64> > zext_ln99_3_reg_225;
    sc_signal< sc_lv<1> > icmp_ln98_fu_158_p2;
    sc_signal< sc_lv<16> > in_load_reg_235;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<16> > select_ln99_fu_184_p3;
    sc_signal< sc_lv<16> > select_ln99_reg_241;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<4> > m_0_reg_58;
    sc_signal< sc_lv<9> > phi_mul_reg_69;
    sc_signal< sc_lv<6> > r_0_reg_81;
    sc_signal< sc_lv<1> > icmp_ln96_fu_114_p2;
    sc_signal< sc_lv<6> > c_0_reg_92;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<9> > zext_ln99_fu_138_p1;
    sc_signal< sc_lv<9> > add_ln99_fu_142_p2;
    sc_signal< sc_lv<9> > mul_ln99_fu_152_p0;
    sc_signal< sc_lv<15> > zext_ln99_2_fu_170_p1;
    sc_signal< sc_lv<15> > add_ln99_1_fu_174_p2;
    sc_signal< sc_lv<1> > tmp_fu_103_p2;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< sc_lv<15> > mul_ln99_fu_152_p00;
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
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<9> ap_const_lv9_31;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<6> ap_const_lv6_31;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<15> ap_const_lv15_31;
    static const sc_lv<5> ap_const_lv5_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_add_ln96_fu_108_p2();
    void thread_add_ln99_1_fu_174_p2();
    void thread_add_ln99_fu_142_p2();
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
    void thread_c_fu_164_p2();
    void thread_icmp_ln96_fu_114_p2();
    void thread_icmp_ln97_fu_126_p2();
    void thread_icmp_ln98_fu_158_p2();
    void thread_in_r_address0();
    void thread_in_r_ce0();
    void thread_m_fu_120_p2();
    void thread_mul_ln99_fu_152_p0();
    void thread_mul_ln99_fu_152_p00();
    void thread_mul_ln99_fu_152_p2();
    void thread_out_r_address0();
    void thread_out_r_ce0();
    void thread_out_r_d0();
    void thread_out_r_we0();
    void thread_r_fu_132_p2();
    void thread_select_ln99_fu_184_p3();
    void thread_zext_ln99_2_fu_170_p1();
    void thread_zext_ln99_3_fu_179_p1();
    void thread_zext_ln99_fu_138_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
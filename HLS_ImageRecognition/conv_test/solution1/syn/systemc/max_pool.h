// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _max_pool_HH_
#define _max_pool_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "test_hcmp_16ns_16g8j.h"

namespace ap_rtl {

struct max_pool : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > in_r_address0;
    sc_out< sc_logic > in_r_ce0;
    sc_in< sc_lv<16> > in_r_q0;
    sc_out< sc_lv<11> > out_r_address0;
    sc_out< sc_logic > out_r_ce0;
    sc_out< sc_logic > out_r_we0;
    sc_out< sc_lv<16> > out_r_d0;
    sc_signal< sc_lv<5> > ap_var_for_const0;


    // Module declarations
    max_pool(sc_module_name name);
    SC_HAS_PROCESS(max_pool);

    ~max_pool();

    sc_trace_file* mVcdFile;

    test_hcmp_16ns_16g8j<1,1,16,16,1>* test_hcmp_16ns_16g8j_U16;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > m_fu_153_p2;
    sc_signal< sc_lv<4> > m_reg_349;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<9> > tmp_s_fu_159_p3;
    sc_signal< sc_lv<9> > tmp_s_reg_354;
    sc_signal< sc_lv<1> > icmp_ln73_fu_147_p2;
    sc_signal< sc_lv<9> > zext_ln75_fu_175_p1;
    sc_signal< sc_lv<9> > zext_ln75_reg_359;
    sc_signal< sc_lv<5> > i_fu_185_p2;
    sc_signal< sc_lv<5> > i_reg_367;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > zext_ln80_1_fu_201_p1;
    sc_signal< sc_lv<32> > zext_ln80_1_reg_372;
    sc_signal< sc_lv<1> > icmp_ln75_fu_179_p2;
    sc_signal< sc_lv<32> > zext_ln80_2_fu_211_p1;
    sc_signal< sc_lv<32> > zext_ln80_2_reg_377;
    sc_signal< sc_lv<13> > tmp_28_cast_fu_224_p3;
    sc_signal< sc_lv<13> > tmp_28_cast_reg_382;
    sc_signal< sc_lv<5> > j_fu_238_p2;
    sc_signal< sc_lv<5> > j_reg_390;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > zext_ln81_1_fu_254_p1;
    sc_signal< sc_lv<32> > zext_ln81_1_reg_395;
    sc_signal< sc_lv<1> > icmp_ln77_fu_232_p2;
    sc_signal< sc_lv<32> > zext_ln81_2_fu_264_p1;
    sc_signal< sc_lv<32> > zext_ln81_2_reg_400;
    sc_signal< sc_lv<15> > tmp_31_cast_fu_286_p3;
    sc_signal< sc_lv<15> > tmp_31_cast_reg_408;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > icmp_ln80_fu_268_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > icmp_ln81_fu_308_p2;
    sc_signal< sc_lv<32> > y_2_fu_327_p2;
    sc_signal< sc_lv<32> > y_2_reg_421;
    sc_signal< sc_lv<32> > x_2_fu_333_p2;
    sc_signal< sc_lv<16> > max_record_reg_431;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > max_record_3_fu_339_p3;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > m_0_reg_64;
    sc_signal< sc_lv<5> > i_0_reg_75;
    sc_signal< sc_lv<5> > j_0_reg_86;
    sc_signal< sc_lv<16> > max_record_0_reg_98;
    sc_signal< sc_lv<32> > x_0_reg_111;
    sc_signal< sc_lv<16> > max_record_1_reg_121;
    sc_signal< sc_lv<32> > y_0_reg_133;
    sc_signal< sc_lv<64> > zext_ln87_5_fu_303_p1;
    sc_signal< sc_lv<64> > zext_ln83_4_fu_322_p1;
    sc_signal< sc_lv<8> > tmp_3_fu_167_p3;
    sc_signal< sc_lv<5> > x_fu_191_p2;
    sc_signal< sc_lv<6> > zext_ln80_fu_197_p1;
    sc_signal< sc_lv<6> > add_ln80_fu_205_p2;
    sc_signal< sc_lv<9> > zext_ln87_fu_215_p1;
    sc_signal< sc_lv<9> > add_ln87_fu_219_p2;
    sc_signal< sc_lv<5> > y_fu_244_p2;
    sc_signal< sc_lv<6> > zext_ln81_fu_250_p1;
    sc_signal< sc_lv<6> > add_ln81_fu_258_p2;
    sc_signal< sc_lv<10> > zext_ln83_fu_277_p1;
    sc_signal< sc_lv<10> > trunc_ln83_fu_273_p1;
    sc_signal< sc_lv<10> > add_ln83_fu_280_p2;
    sc_signal< sc_lv<13> > zext_ln87_4_fu_294_p1;
    sc_signal< sc_lv<13> > add_ln87_2_fu_298_p2;
    sc_signal< sc_lv<15> > trunc_ln83_3_fu_313_p1;
    sc_signal< sc_lv<15> > add_ln83_2_fu_317_p2;
    sc_signal< sc_lv<1> > tmp_fu_142_p2;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<16> ap_const_lv16_FC00;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<6> ap_const_lv6_2;
    static const sc_lv<5> ap_const_lv5_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln80_fu_205_p2();
    void thread_add_ln81_fu_258_p2();
    void thread_add_ln83_2_fu_317_p2();
    void thread_add_ln83_fu_280_p2();
    void thread_add_ln87_2_fu_298_p2();
    void thread_add_ln87_fu_219_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_fu_185_p2();
    void thread_icmp_ln73_fu_147_p2();
    void thread_icmp_ln75_fu_179_p2();
    void thread_icmp_ln77_fu_232_p2();
    void thread_icmp_ln80_fu_268_p2();
    void thread_icmp_ln81_fu_308_p2();
    void thread_in_r_address0();
    void thread_in_r_ce0();
    void thread_j_fu_238_p2();
    void thread_m_fu_153_p2();
    void thread_max_record_3_fu_339_p3();
    void thread_out_r_address0();
    void thread_out_r_ce0();
    void thread_out_r_d0();
    void thread_out_r_we0();
    void thread_tmp_28_cast_fu_224_p3();
    void thread_tmp_31_cast_fu_286_p3();
    void thread_tmp_3_fu_167_p3();
    void thread_tmp_s_fu_159_p3();
    void thread_trunc_ln83_3_fu_313_p1();
    void thread_trunc_ln83_fu_273_p1();
    void thread_x_2_fu_333_p2();
    void thread_x_fu_191_p2();
    void thread_y_2_fu_327_p2();
    void thread_y_fu_244_p2();
    void thread_zext_ln75_fu_175_p1();
    void thread_zext_ln80_1_fu_201_p1();
    void thread_zext_ln80_2_fu_211_p1();
    void thread_zext_ln80_fu_197_p1();
    void thread_zext_ln81_1_fu_254_p1();
    void thread_zext_ln81_2_fu_264_p1();
    void thread_zext_ln81_fu_250_p1();
    void thread_zext_ln83_4_fu_322_p1();
    void thread_zext_ln83_fu_277_p1();
    void thread_zext_ln87_4_fu_294_p1();
    void thread_zext_ln87_5_fu_303_p1();
    void thread_zext_ln87_fu_215_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
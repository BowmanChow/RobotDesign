// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_1_HH_
#define _conv_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pad_3_34_0_8.h"
#include "test_hadd_16ns_16eOg.h"
#include "test_hmul_16ns_16fYi.h"
#include "conv_1_layerconv1bkb.h"
#include "conv_1_layerconv1cud.h"
#include "conv_1_input_aftedEe.h"

namespace ap_rtl {

struct conv_1 : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<12> > input_r_address0;
    sc_out< sc_logic > input_r_ce0;
    sc_in< sc_lv<16> > input_r_q0;
    sc_out< sc_lv<13> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<16> > output_r_d0;
    sc_in< sc_lv<16> > output_r_q0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    conv_1(sc_module_name name);
    SC_HAS_PROCESS(conv_1);

    ~conv_1();

    sc_trace_file* mVcdFile;

    conv_1_layerconv1bkb* layerconv1_0_weight_U;
    conv_1_layerconv1cud* layerconv1_0_bias_U;
    conv_1_input_aftedEe* input_after_padding_U;
    pad_3_34_0_8* grp_pad_3_34_0_8_fu_266;
    test_hadd_16ns_16eOg<1,2,16,16,16>* test_hadd_16ns_16eOg_U3;
    test_hmul_16ns_16fYi<1,2,16,16,16>* test_hmul_16ns_16fYi_U4;
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > layerconv1_0_weight_address0;
    sc_signal< sc_logic > layerconv1_0_weight_ce0;
    sc_signal< sc_lv<16> > layerconv1_0_weight_q0;
    sc_signal< sc_lv<3> > layerconv1_0_bias_address0;
    sc_signal< sc_logic > layerconv1_0_bias_ce0;
    sc_signal< sc_lv<16> > layerconv1_0_bias_q0;
    sc_signal< sc_lv<4> > i_fu_293_p2;
    sc_signal< sc_lv<4> > i_reg_690;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > sext_ln47_fu_321_p1;
    sc_signal< sc_lv<8> > sext_ln47_reg_695;
    sc_signal< sc_lv<1> > icmp_ln31_fu_287_p2;
    sc_signal< sc_lv<10> > zext_ln34_fu_333_p1;
    sc_signal< sc_lv<10> > zext_ln34_reg_700;
    sc_signal< sc_lv<6> > x_fu_343_p2;
    sc_signal< sc_lv<6> > x_reg_708;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<15> > tmp_36_cast_fu_358_p3;
    sc_signal< sc_lv<15> > tmp_36_cast_reg_713;
    sc_signal< sc_lv<1> > icmp_ln34_fu_337_p2;
    sc_signal< sc_lv<6> > y_3_fu_372_p2;
    sc_signal< sc_lv<6> > y_3_reg_721;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<2> > j_fu_384_p2;
    sc_signal< sc_lv<2> > j_reg_729;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > sub_ln47_1_fu_415_p2;
    sc_signal< sc_lv<64> > sub_ln47_1_reg_734;
    sc_signal< sc_lv<1> > icmp_ln39_fu_378_p2;
    sc_signal< sc_lv<8> > add_ln47_3_fu_445_p2;
    sc_signal< sc_lv<8> > add_ln47_3_reg_739;
    sc_signal< sc_lv<2> > i1_fu_475_p2;
    sc_signal< sc_lv<2> > i1_reg_747;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<13> > add_ln47_5_fu_516_p2;
    sc_signal< sc_lv<13> > add_ln47_5_reg_752;
    sc_signal< sc_lv<1> > icmp_ln41_fu_469_p2;
    sc_signal< sc_lv<9> > sub_ln47_2_fu_547_p2;
    sc_signal< sc_lv<9> > sub_ln47_2_reg_757;
    sc_signal< sc_lv<2> > j1_fu_563_p2;
    sc_signal< sc_lv<2> > j1_reg_765;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > icmp_ln44_fu_557_p2;
    sc_signal< sc_lv<16> > input_after_padding_q0;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<16> > grp_fu_281_p2;
    sc_signal< sc_lv<16> > tmp_5_reg_790;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<16> > grp_fu_274_p2;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<4> > i_2_fu_609_p2;
    sc_signal< sc_lv<4> > i_2_reg_803;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<1> > icmp_ln55_fu_603_p2;
    sc_signal< sc_lv<10> > zext_ln63_1_fu_628_p1;
    sc_signal< sc_lv<10> > zext_ln63_1_reg_813;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<16> > layerconv1_0_bias_lo_reg_818;
    sc_signal< sc_lv<6> > x_3_fu_638_p2;
    sc_signal< sc_lv<6> > x_3_reg_826;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<15> > tmp_38_cast_fu_653_p3;
    sc_signal< sc_lv<15> > tmp_38_cast_reg_831;
    sc_signal< sc_lv<1> > icmp_ln57_fu_632_p2;
    sc_signal< sc_lv<6> > y_fu_667_p2;
    sc_signal< sc_lv<6> > y_reg_839;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<13> > output_addr_reg_844;
    sc_signal< sc_lv<1> > icmp_ln60_fu_661_p2;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<12> > input_after_padding_address0;
    sc_signal< sc_logic > input_after_padding_ce0;
    sc_signal< sc_logic > input_after_padding_we0;
    sc_signal< sc_logic > grp_pad_3_34_0_8_fu_266_ap_start;
    sc_signal< sc_logic > grp_pad_3_34_0_8_fu_266_ap_done;
    sc_signal< sc_logic > grp_pad_3_34_0_8_fu_266_ap_idle;
    sc_signal< sc_logic > grp_pad_3_34_0_8_fu_266_ap_ready;
    sc_signal< sc_lv<12> > grp_pad_3_34_0_8_fu_266_input_r_address0;
    sc_signal< sc_logic > grp_pad_3_34_0_8_fu_266_input_r_ce0;
    sc_signal< sc_lv<12> > grp_pad_3_34_0_8_fu_266_output_r_address0;
    sc_signal< sc_logic > grp_pad_3_34_0_8_fu_266_output_r_ce0;
    sc_signal< sc_logic > grp_pad_3_34_0_8_fu_266_output_r_we0;
    sc_signal< sc_lv<16> > grp_pad_3_34_0_8_fu_266_output_r_d0;
    sc_signal< sc_lv<4> > i_0_reg_127;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > x_0_reg_138;
    sc_signal< sc_lv<1> > icmp_ln36_fu_366_p2;
    sc_signal< sc_lv<6> > y_0_reg_150;
    sc_signal< sc_lv<2> > j_0_reg_162;
    sc_signal< sc_lv<16> > convsum_0_reg_173;
    sc_signal< sc_lv<16> > convsum_1_reg_186;
    sc_signal< sc_lv<2> > i1_0_reg_198;
    sc_signal< sc_lv<16> > convsum_2_reg_209;
    sc_signal< sc_lv<2> > j1_0_reg_221;
    sc_signal< sc_lv<4> > i2_0_reg_232;
    sc_signal< sc_lv<6> > x3_0_reg_244;
    sc_signal< sc_lv<6> > y4_0_reg_255;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > grp_pad_3_34_0_8_fu_266_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln51_2_fu_460_p1;
    sc_signal< sc_lv<64> > zext_ln47_9_fu_584_p1;
    sc_signal< sc_lv<64> > zext_ln47_11_fu_598_p1;
    sc_signal< sc_lv<64> > zext_ln63_fu_615_p1;
    sc_signal< sc_lv<64> > zext_ln63_4_fu_682_p1;
    sc_signal< sc_lv<16> > grp_fu_274_p0;
    sc_signal< sc_lv<16> > grp_fu_274_p1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<6> > tmp_s_fu_303_p3;
    sc_signal< sc_lv<7> > zext_ln47_1_fu_311_p1;
    sc_signal< sc_lv<7> > zext_ln47_fu_299_p1;
    sc_signal< sc_lv<7> > sub_ln47_fu_315_p2;
    sc_signal< sc_lv<9> > tmp_4_fu_325_p3;
    sc_signal< sc_lv<10> > zext_ln51_fu_349_p1;
    sc_signal< sc_lv<10> > add_ln51_fu_353_p2;
    sc_signal< sc_lv<8> > zext_ln47_2_fu_390_p1;
    sc_signal< sc_lv<8> > add_ln47_1_fu_394_p2;
    sc_signal< sc_lv<10> > tmp_7_fu_403_p3;
    sc_signal< sc_lv<64> > sext_ln47_2_fu_411_p1;
    sc_signal< sc_lv<64> > sext_ln47_1_fu_399_p1;
    sc_signal< sc_lv<7> > tmp_8_fu_421_p3;
    sc_signal< sc_lv<3> > tmp_9_fu_433_p3;
    sc_signal< sc_lv<8> > zext_ln47_4_fu_441_p1;
    sc_signal< sc_lv<8> > zext_ln47_3_fu_429_p1;
    sc_signal< sc_lv<15> > zext_ln51_1_fu_451_p1;
    sc_signal< sc_lv<15> > add_ln51_1_fu_455_p2;
    sc_signal< sc_lv<6> > zext_ln41_fu_465_p1;
    sc_signal< sc_lv<6> > add_ln47_fu_481_p2;
    sc_signal< sc_lv<8> > zext_ln47_5_fu_487_p1;
    sc_signal< sc_lv<8> > add_ln47_4_fu_491_p2;
    sc_signal< sc_lv<9> > tmp_10_fu_504_p3;
    sc_signal< sc_lv<13> > zext_ln47_7_fu_512_p1;
    sc_signal< sc_lv<13> > p_shl5_cast_fu_496_p3;
    sc_signal< sc_lv<64> > zext_ln47_6_fu_522_p1;
    sc_signal< sc_lv<64> > add_ln47_6_fu_526_p2;
    sc_signal< sc_lv<7> > trunc_ln47_1_fu_535_p1;
    sc_signal< sc_lv<9> > p_shl4_cast_fu_539_p3;
    sc_signal< sc_lv<9> > trunc_ln47_fu_531_p1;
    sc_signal< sc_lv<6> > zext_ln44_fu_553_p1;
    sc_signal< sc_lv<6> > add_ln47_2_fu_569_p2;
    sc_signal< sc_lv<13> > zext_ln47_8_fu_575_p1;
    sc_signal< sc_lv<13> > add_ln47_7_fu_579_p2;
    sc_signal< sc_lv<9> > zext_ln47_10_fu_589_p1;
    sc_signal< sc_lv<9> > add_ln47_8_fu_593_p2;
    sc_signal< sc_lv<9> > tmp_6_fu_620_p3;
    sc_signal< sc_lv<10> > zext_ln63_2_fu_644_p1;
    sc_signal< sc_lv<10> > add_ln63_fu_648_p2;
    sc_signal< sc_lv<15> > zext_ln63_3_fu_673_p1;
    sc_signal< sc_lv<15> > add_ln63_1_fu_677_p2;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<18> ap_ST_fsm_state1;
    static const sc_lv<18> ap_ST_fsm_state2;
    static const sc_lv<18> ap_ST_fsm_state3;
    static const sc_lv<18> ap_ST_fsm_state4;
    static const sc_lv<18> ap_ST_fsm_state5;
    static const sc_lv<18> ap_ST_fsm_state6;
    static const sc_lv<18> ap_ST_fsm_state7;
    static const sc_lv<18> ap_ST_fsm_state8;
    static const sc_lv<18> ap_ST_fsm_state9;
    static const sc_lv<18> ap_ST_fsm_state10;
    static const sc_lv<18> ap_ST_fsm_state11;
    static const sc_lv<18> ap_ST_fsm_state12;
    static const sc_lv<18> ap_ST_fsm_state13;
    static const sc_lv<18> ap_ST_fsm_state14;
    static const sc_lv<18> ap_ST_fsm_state15;
    static const sc_lv<18> ap_ST_fsm_state16;
    static const sc_lv<18> ap_ST_fsm_state17;
    static const sc_lv<18> ap_ST_fsm_state18;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln47_1_fu_394_p2();
    void thread_add_ln47_2_fu_569_p2();
    void thread_add_ln47_3_fu_445_p2();
    void thread_add_ln47_4_fu_491_p2();
    void thread_add_ln47_5_fu_516_p2();
    void thread_add_ln47_6_fu_526_p2();
    void thread_add_ln47_7_fu_579_p2();
    void thread_add_ln47_8_fu_593_p2();
    void thread_add_ln47_fu_481_p2();
    void thread_add_ln51_1_fu_455_p2();
    void thread_add_ln51_fu_353_p2();
    void thread_add_ln63_1_fu_677_p2();
    void thread_add_ln63_fu_648_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_274_p0();
    void thread_grp_fu_274_p1();
    void thread_grp_pad_3_34_0_8_fu_266_ap_start();
    void thread_i1_fu_475_p2();
    void thread_i_2_fu_609_p2();
    void thread_i_fu_293_p2();
    void thread_icmp_ln31_fu_287_p2();
    void thread_icmp_ln34_fu_337_p2();
    void thread_icmp_ln36_fu_366_p2();
    void thread_icmp_ln39_fu_378_p2();
    void thread_icmp_ln41_fu_469_p2();
    void thread_icmp_ln44_fu_557_p2();
    void thread_icmp_ln55_fu_603_p2();
    void thread_icmp_ln57_fu_632_p2();
    void thread_icmp_ln60_fu_661_p2();
    void thread_input_after_padding_address0();
    void thread_input_after_padding_ce0();
    void thread_input_after_padding_we0();
    void thread_input_r_address0();
    void thread_input_r_ce0();
    void thread_j1_fu_563_p2();
    void thread_j_fu_384_p2();
    void thread_layerconv1_0_bias_address0();
    void thread_layerconv1_0_bias_ce0();
    void thread_layerconv1_0_weight_address0();
    void thread_layerconv1_0_weight_ce0();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_p_shl4_cast_fu_539_p3();
    void thread_p_shl5_cast_fu_496_p3();
    void thread_sext_ln47_1_fu_399_p1();
    void thread_sext_ln47_2_fu_411_p1();
    void thread_sext_ln47_fu_321_p1();
    void thread_sub_ln47_1_fu_415_p2();
    void thread_sub_ln47_2_fu_547_p2();
    void thread_sub_ln47_fu_315_p2();
    void thread_tmp_10_fu_504_p3();
    void thread_tmp_36_cast_fu_358_p3();
    void thread_tmp_38_cast_fu_653_p3();
    void thread_tmp_4_fu_325_p3();
    void thread_tmp_6_fu_620_p3();
    void thread_tmp_7_fu_403_p3();
    void thread_tmp_8_fu_421_p3();
    void thread_tmp_9_fu_433_p3();
    void thread_tmp_s_fu_303_p3();
    void thread_trunc_ln47_1_fu_535_p1();
    void thread_trunc_ln47_fu_531_p1();
    void thread_x_3_fu_638_p2();
    void thread_x_fu_343_p2();
    void thread_y_3_fu_372_p2();
    void thread_y_fu_667_p2();
    void thread_zext_ln34_fu_333_p1();
    void thread_zext_ln41_fu_465_p1();
    void thread_zext_ln44_fu_553_p1();
    void thread_zext_ln47_10_fu_589_p1();
    void thread_zext_ln47_11_fu_598_p1();
    void thread_zext_ln47_1_fu_311_p1();
    void thread_zext_ln47_2_fu_390_p1();
    void thread_zext_ln47_3_fu_429_p1();
    void thread_zext_ln47_4_fu_441_p1();
    void thread_zext_ln47_5_fu_487_p1();
    void thread_zext_ln47_6_fu_522_p1();
    void thread_zext_ln47_7_fu_512_p1();
    void thread_zext_ln47_8_fu_575_p1();
    void thread_zext_ln47_9_fu_584_p1();
    void thread_zext_ln47_fu_299_p1();
    void thread_zext_ln51_1_fu_451_p1();
    void thread_zext_ln51_2_fu_460_p1();
    void thread_zext_ln51_fu_349_p1();
    void thread_zext_ln63_1_fu_628_p1();
    void thread_zext_ln63_2_fu_644_p1();
    void thread_zext_ln63_3_fu_673_p1();
    void thread_zext_ln63_4_fu_682_p1();
    void thread_zext_ln63_fu_615_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

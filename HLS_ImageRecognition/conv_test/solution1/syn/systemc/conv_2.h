// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_2_HH_
#define _conv_2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pad_14_24_0_11.h"
#include "test_hadd_16ns_16eOg.h"
#include "test_hmul_16ns_16fYi.h"
#include "test_mul_mul_10nsncg.h"
#include "conv_2_layerconv3kbM.h"
#include "conv_2_layerconv3lbW.h"
#include "conv_2_input_aftemb6.h"

namespace ap_rtl {

struct conv_2 : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > input_r_address0;
    sc_out< sc_logic > input_r_ce0;
    sc_in< sc_lv<16> > input_r_q0;
    sc_out< sc_lv<14> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<16> > output_r_d0;
    sc_in< sc_lv<16> > output_r_q0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    conv_2(sc_module_name name);
    SC_HAS_PROCESS(conv_2);

    ~conv_2();

    sc_trace_file* mVcdFile;

    conv_2_layerconv3kbM* layerconv3_0_weight_U;
    conv_2_layerconv3lbW* layerconv3_0_bias_U;
    conv_2_input_aftemb6* input_after_padding_U;
    pad_14_24_0_11* grp_pad_14_24_0_11_fu_295;
    test_hadd_16ns_16eOg<1,2,16,16,16>* test_hadd_16ns_16eOg_U30;
    test_hmul_16ns_16fYi<1,2,16,16,16>* test_hmul_16ns_16fYi_U31;
    test_mul_mul_10nsncg<1,1,10,6,14>* test_mul_mul_10nsncg_U32;
    test_mul_mul_10nsncg<1,1,10,6,14>* test_mul_mul_10nsncg_U33;
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<12> > layerconv3_0_weight_address0;
    sc_signal< sc_logic > layerconv3_0_weight_ce0;
    sc_signal< sc_lv<16> > layerconv3_0_weight_q0;
    sc_signal< sc_lv<5> > layerconv3_0_bias_address0;
    sc_signal< sc_logic > layerconv3_0_bias_ce0;
    sc_signal< sc_lv<16> > layerconv3_0_bias_q0;
    sc_signal< sc_lv<10> > add_ln31_fu_316_p2;
    sc_signal< sc_lv<10> > add_ln31_reg_722;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<5> > i_fu_328_p2;
    sc_signal< sc_lv<5> > i_reg_730;
    sc_signal< sc_lv<11> > sext_ln47_fu_364_p1;
    sc_signal< sc_lv<11> > sext_ln47_reg_735;
    sc_signal< sc_lv<1> > icmp_ln31_fu_322_p2;
    sc_signal< sc_lv<5> > x_fu_374_p2;
    sc_signal< sc_lv<5> > x_reg_743;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<14> > mul_ln51_fu_710_p2;
    sc_signal< sc_lv<14> > mul_ln51_reg_748;
    sc_signal< sc_lv<1> > icmp_ln34_fu_368_p2;
    sc_signal< sc_lv<5> > y_2_fu_400_p2;
    sc_signal< sc_lv<5> > y_2_reg_756;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > j_fu_412_p2;
    sc_signal< sc_lv<4> > j_reg_764;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > sub_ln47_1_fu_443_p2;
    sc_signal< sc_lv<64> > sub_ln47_1_reg_769;
    sc_signal< sc_lv<1> > icmp_ln39_fu_406_p2;
    sc_signal< sc_lv<11> > sext_ln47_3_fu_479_p1;
    sc_signal< sc_lv<11> > sext_ln47_3_reg_774;
    sc_signal< sc_lv<2> > i1_fu_507_p2;
    sc_signal< sc_lv<2> > i1_reg_782;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<14> > sub_ln47_3_fu_548_p2;
    sc_signal< sc_lv<14> > sub_ln47_3_reg_787;
    sc_signal< sc_lv<1> > icmp_ln41_fu_501_p2;
    sc_signal< sc_lv<13> > sub_ln47_4_fu_579_p2;
    sc_signal< sc_lv<13> > sub_ln47_4_reg_792;
    sc_signal< sc_lv<2> > j1_fu_595_p2;
    sc_signal< sc_lv<2> > j1_reg_800;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > icmp_ln44_fu_589_p2;
    sc_signal< sc_lv<16> > input_after_padding_q0;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<16> > grp_fu_310_p2;
    sc_signal< sc_lv<16> > tmp_8_reg_825;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<16> > grp_fu_303_p2;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<10> > add_ln55_fu_635_p2;
    sc_signal< sc_lv<10> > add_ln55_reg_835;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<5> > i_2_fu_647_p2;
    sc_signal< sc_lv<5> > i_2_reg_843;
    sc_signal< sc_lv<1> > icmp_ln55_fu_641_p2;
    sc_signal< sc_lv<16> > layerconv3_0_bias_lo_reg_853;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<5> > x_2_fu_664_p2;
    sc_signal< sc_lv<5> > x_2_reg_861;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<14> > mul_ln63_fu_716_p2;
    sc_signal< sc_lv<14> > mul_ln63_reg_866;
    sc_signal< sc_lv<1> > icmp_ln57_fu_658_p2;
    sc_signal< sc_lv<5> > y_fu_690_p2;
    sc_signal< sc_lv<5> > y_reg_874;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<14> > output_addr_reg_879;
    sc_signal< sc_lv<1> > icmp_ln60_fu_684_p2;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<13> > input_after_padding_address0;
    sc_signal< sc_logic > input_after_padding_ce0;
    sc_signal< sc_logic > input_after_padding_we0;
    sc_signal< sc_logic > grp_pad_14_24_0_11_fu_295_ap_start;
    sc_signal< sc_logic > grp_pad_14_24_0_11_fu_295_ap_done;
    sc_signal< sc_logic > grp_pad_14_24_0_11_fu_295_ap_idle;
    sc_signal< sc_logic > grp_pad_14_24_0_11_fu_295_ap_ready;
    sc_signal< sc_lv<13> > grp_pad_14_24_0_11_fu_295_input_r_address0;
    sc_signal< sc_logic > grp_pad_14_24_0_11_fu_295_input_r_ce0;
    sc_signal< sc_lv<13> > grp_pad_14_24_0_11_fu_295_output_r_address0;
    sc_signal< sc_logic > grp_pad_14_24_0_11_fu_295_output_r_ce0;
    sc_signal< sc_logic > grp_pad_14_24_0_11_fu_295_output_r_we0;
    sc_signal< sc_lv<16> > grp_pad_14_24_0_11_fu_295_output_r_d0;
    sc_signal< sc_lv<5> > i_0_reg_133;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > phi_mul_reg_144;
    sc_signal< sc_lv<5> > x_0_reg_156;
    sc_signal< sc_lv<1> > icmp_ln36_fu_394_p2;
    sc_signal< sc_lv<5> > y_0_reg_168;
    sc_signal< sc_lv<4> > j_0_reg_180;
    sc_signal< sc_lv<16> > convsum_0_reg_191;
    sc_signal< sc_lv<16> > convsum_1_reg_204;
    sc_signal< sc_lv<2> > i1_0_reg_216;
    sc_signal< sc_lv<16> > convsum_2_reg_227;
    sc_signal< sc_lv<2> > j1_0_reg_239;
    sc_signal< sc_lv<5> > i2_0_reg_250;
    sc_signal< sc_lv<10> > phi_mul8_reg_261;
    sc_signal< sc_lv<5> > x3_0_reg_273;
    sc_signal< sc_lv<5> > y4_0_reg_284;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > grp_pad_14_24_0_11_fu_295_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln51_3_fu_492_p1;
    sc_signal< sc_lv<64> > zext_ln47_8_fu_616_p1;
    sc_signal< sc_lv<64> > zext_ln47_10_fu_630_p1;
    sc_signal< sc_lv<64> > zext_ln63_fu_653_p1;
    sc_signal< sc_lv<64> > zext_ln63_4_fu_705_p1;
    sc_signal< sc_lv<16> > grp_fu_303_p0;
    sc_signal< sc_lv<16> > grp_fu_303_p1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<9> > tmp_s_fu_334_p3;
    sc_signal< sc_lv<6> > tmp_1_fu_346_p3;
    sc_signal< sc_lv<10> > zext_ln47_fu_342_p1;
    sc_signal< sc_lv<10> > zext_ln47_1_fu_354_p1;
    sc_signal< sc_lv<10> > sub_ln47_fu_358_p2;
    sc_signal< sc_lv<10> > zext_ln51_fu_380_p1;
    sc_signal< sc_lv<10> > add_ln51_fu_384_p2;
    sc_signal< sc_lv<11> > zext_ln47_2_fu_418_p1;
    sc_signal< sc_lv<11> > add_ln47_1_fu_422_p2;
    sc_signal< sc_lv<13> > tmp_2_fu_431_p3;
    sc_signal< sc_lv<64> > sext_ln47_2_fu_439_p1;
    sc_signal< sc_lv<64> > sext_ln47_1_fu_427_p1;
    sc_signal< sc_lv<9> > tmp_3_fu_449_p3;
    sc_signal< sc_lv<7> > tmp_4_fu_461_p3;
    sc_signal< sc_lv<10> > zext_ln47_3_fu_457_p1;
    sc_signal< sc_lv<10> > zext_ln47_4_fu_469_p1;
    sc_signal< sc_lv<10> > sub_ln47_2_fu_473_p2;
    sc_signal< sc_lv<14> > zext_ln51_2_fu_483_p1;
    sc_signal< sc_lv<14> > add_ln51_1_fu_487_p2;
    sc_signal< sc_lv<5> > zext_ln41_fu_497_p1;
    sc_signal< sc_lv<5> > add_ln47_fu_513_p2;
    sc_signal< sc_lv<11> > zext_ln47_5_fu_519_p1;
    sc_signal< sc_lv<11> > add_ln47_2_fu_523_p2;
    sc_signal< sc_lv<9> > trunc_ln47_fu_528_p1;
    sc_signal< sc_lv<14> > p_shl6_cast_fu_532_p3;
    sc_signal< sc_lv<14> > p_shl7_cast_fu_540_p3;
    sc_signal< sc_lv<64> > zext_ln47_6_fu_554_p1;
    sc_signal< sc_lv<64> > add_ln47_4_fu_558_p2;
    sc_signal< sc_lv<11> > trunc_ln47_2_fu_567_p1;
    sc_signal< sc_lv<13> > p_shl5_cast_fu_571_p3;
    sc_signal< sc_lv<13> > trunc_ln47_1_fu_563_p1;
    sc_signal< sc_lv<5> > zext_ln44_fu_585_p1;
    sc_signal< sc_lv<5> > add_ln47_3_fu_601_p2;
    sc_signal< sc_lv<14> > zext_ln47_7_fu_607_p1;
    sc_signal< sc_lv<14> > add_ln47_5_fu_611_p2;
    sc_signal< sc_lv<13> > zext_ln47_9_fu_621_p1;
    sc_signal< sc_lv<13> > add_ln47_6_fu_625_p2;
    sc_signal< sc_lv<10> > zext_ln63_1_fu_670_p1;
    sc_signal< sc_lv<10> > add_ln63_fu_674_p2;
    sc_signal< sc_lv<14> > zext_ln63_3_fu_696_p1;
    sc_signal< sc_lv<14> > add_ln63_1_fu_700_p2;
    sc_signal< sc_lv<10> > mul_ln51_fu_710_p0;
    sc_signal< sc_lv<6> > mul_ln51_fu_710_p1;
    sc_signal< sc_lv<10> > mul_ln63_fu_716_p0;
    sc_signal< sc_lv<6> > mul_ln63_fu_716_p1;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    sc_signal< sc_lv<14> > mul_ln51_fu_710_p00;
    sc_signal< sc_lv<14> > mul_ln63_fu_716_p00;
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
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<10> ap_const_lv10_16;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_16;
    static const sc_lv<4> ap_const_lv4_E;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<14> ap_const_lv14_16;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln31_fu_316_p2();
    void thread_add_ln47_1_fu_422_p2();
    void thread_add_ln47_2_fu_523_p2();
    void thread_add_ln47_3_fu_601_p2();
    void thread_add_ln47_4_fu_558_p2();
    void thread_add_ln47_5_fu_611_p2();
    void thread_add_ln47_6_fu_625_p2();
    void thread_add_ln47_fu_513_p2();
    void thread_add_ln51_1_fu_487_p2();
    void thread_add_ln51_fu_384_p2();
    void thread_add_ln55_fu_635_p2();
    void thread_add_ln63_1_fu_700_p2();
    void thread_add_ln63_fu_674_p2();
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
    void thread_grp_fu_303_p0();
    void thread_grp_fu_303_p1();
    void thread_grp_pad_14_24_0_11_fu_295_ap_start();
    void thread_i1_fu_507_p2();
    void thread_i_2_fu_647_p2();
    void thread_i_fu_328_p2();
    void thread_icmp_ln31_fu_322_p2();
    void thread_icmp_ln34_fu_368_p2();
    void thread_icmp_ln36_fu_394_p2();
    void thread_icmp_ln39_fu_406_p2();
    void thread_icmp_ln41_fu_501_p2();
    void thread_icmp_ln44_fu_589_p2();
    void thread_icmp_ln55_fu_641_p2();
    void thread_icmp_ln57_fu_658_p2();
    void thread_icmp_ln60_fu_684_p2();
    void thread_input_after_padding_address0();
    void thread_input_after_padding_ce0();
    void thread_input_after_padding_we0();
    void thread_input_r_address0();
    void thread_input_r_ce0();
    void thread_j1_fu_595_p2();
    void thread_j_fu_412_p2();
    void thread_layerconv3_0_bias_address0();
    void thread_layerconv3_0_bias_ce0();
    void thread_layerconv3_0_weight_address0();
    void thread_layerconv3_0_weight_ce0();
    void thread_mul_ln51_fu_710_p0();
    void thread_mul_ln51_fu_710_p00();
    void thread_mul_ln51_fu_710_p1();
    void thread_mul_ln63_fu_716_p0();
    void thread_mul_ln63_fu_716_p00();
    void thread_mul_ln63_fu_716_p1();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_p_shl5_cast_fu_571_p3();
    void thread_p_shl6_cast_fu_532_p3();
    void thread_p_shl7_cast_fu_540_p3();
    void thread_sext_ln47_1_fu_427_p1();
    void thread_sext_ln47_2_fu_439_p1();
    void thread_sext_ln47_3_fu_479_p1();
    void thread_sext_ln47_fu_364_p1();
    void thread_sub_ln47_1_fu_443_p2();
    void thread_sub_ln47_2_fu_473_p2();
    void thread_sub_ln47_3_fu_548_p2();
    void thread_sub_ln47_4_fu_579_p2();
    void thread_sub_ln47_fu_358_p2();
    void thread_tmp_1_fu_346_p3();
    void thread_tmp_2_fu_431_p3();
    void thread_tmp_3_fu_449_p3();
    void thread_tmp_4_fu_461_p3();
    void thread_tmp_s_fu_334_p3();
    void thread_trunc_ln47_1_fu_563_p1();
    void thread_trunc_ln47_2_fu_567_p1();
    void thread_trunc_ln47_fu_528_p1();
    void thread_x_2_fu_664_p2();
    void thread_x_fu_374_p2();
    void thread_y_2_fu_400_p2();
    void thread_y_fu_690_p2();
    void thread_zext_ln41_fu_497_p1();
    void thread_zext_ln44_fu_585_p1();
    void thread_zext_ln47_10_fu_630_p1();
    void thread_zext_ln47_1_fu_354_p1();
    void thread_zext_ln47_2_fu_418_p1();
    void thread_zext_ln47_3_fu_457_p1();
    void thread_zext_ln47_4_fu_469_p1();
    void thread_zext_ln47_5_fu_519_p1();
    void thread_zext_ln47_6_fu_554_p1();
    void thread_zext_ln47_7_fu_607_p1();
    void thread_zext_ln47_8_fu_616_p1();
    void thread_zext_ln47_9_fu_621_p1();
    void thread_zext_ln47_fu_342_p1();
    void thread_zext_ln51_2_fu_483_p1();
    void thread_zext_ln51_3_fu_492_p1();
    void thread_zext_ln51_fu_380_p1();
    void thread_zext_ln63_1_fu_670_p1();
    void thread_zext_ln63_3_fu_696_p1();
    void thread_zext_ln63_4_fu_705_p1();
    void thread_zext_ln63_fu_653_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

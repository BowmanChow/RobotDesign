// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "pad_8_16_0_9.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic pad_8_16_0_9::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic pad_8_16_0_9::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> pad_8_16_0_9::ap_ST_fsm_state1 = "1";
const sc_lv<5> pad_8_16_0_9::ap_ST_fsm_state2 = "10";
const sc_lv<5> pad_8_16_0_9::ap_ST_fsm_state3 = "100";
const sc_lv<5> pad_8_16_0_9::ap_ST_fsm_state4 = "1000";
const sc_lv<5> pad_8_16_0_9::ap_ST_fsm_state5 = "10000";
const sc_lv<32> pad_8_16_0_9::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> pad_8_16_0_9::ap_const_lv32_1 = "1";
const sc_lv<1> pad_8_16_0_9::ap_const_lv1_0 = "0";
const sc_lv<32> pad_8_16_0_9::ap_const_lv32_2 = "10";
const sc_lv<32> pad_8_16_0_9::ap_const_lv32_3 = "11";
const sc_lv<4> pad_8_16_0_9::ap_const_lv4_0 = "0000";
const sc_lv<1> pad_8_16_0_9::ap_const_lv1_1 = "1";
const sc_lv<5> pad_8_16_0_9::ap_const_lv5_0 = "00000";
const sc_lv<32> pad_8_16_0_9::ap_const_lv32_4 = "100";
const sc_lv<4> pad_8_16_0_9::ap_const_lv4_8 = "1000";
const sc_lv<4> pad_8_16_0_9::ap_const_lv4_1 = "1";
const sc_lv<5> pad_8_16_0_9::ap_const_lv5_10 = "10000";
const sc_lv<5> pad_8_16_0_9::ap_const_lv5_1 = "1";
const bool pad_8_16_0_9::ap_const_boolean_1 = true;

pad_8_16_0_9::pad_8_16_0_9(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln19_1_fu_157_p2);
    sensitive << ( tmp_14_cast_reg_188 );
    sensitive << ( zext_ln19_1_fu_153_p1 );

    SC_METHOD(thread_add_ln19_fu_128_p2);
    sensitive << ( zext_ln13_reg_175 );
    sensitive << ( zext_ln19_fu_124_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln11_fu_88_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln11_fu_88_p2 );

    SC_METHOD(thread_i_fu_94_p2);
    sensitive << ( i_0_reg_55 );

    SC_METHOD(thread_icmp_ln11_fu_88_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_55 );

    SC_METHOD(thread_icmp_ln13_fu_112_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_0_reg_66 );

    SC_METHOD(thread_icmp_ln15_fu_141_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( k_0_reg_77 );

    SC_METHOD(thread_input_r_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln19_2_fu_162_p1 );

    SC_METHOD(thread_input_r_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_j_fu_118_p2);
    sensitive << ( j_0_reg_66 );

    SC_METHOD(thread_k_fu_147_p2);
    sensitive << ( k_0_reg_77 );

    SC_METHOD(thread_output_r_address0);
    sensitive << ( zext_ln19_2_reg_201 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_r_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_r_d0);
    sensitive << ( input_r_q0 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_r_we0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_tmp_14_cast_fu_133_p3);
    sensitive << ( add_ln19_fu_128_p2 );

    SC_METHOD(thread_tmp_fu_100_p3);
    sensitive << ( i_0_reg_55 );

    SC_METHOD(thread_zext_ln13_fu_108_p1);
    sensitive << ( tmp_fu_100_p3 );

    SC_METHOD(thread_zext_ln19_1_fu_153_p1);
    sensitive << ( k_0_reg_77 );

    SC_METHOD(thread_zext_ln19_2_fu_162_p1);
    sensitive << ( add_ln19_1_fu_157_p2 );

    SC_METHOD(thread_zext_ln19_fu_124_p1);
    sensitive << ( j_0_reg_66 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln11_fu_88_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln13_fu_112_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln15_fu_141_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "pad_8_16_0_9_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, input_r_address0, "(port)input_r_address0");
    sc_trace(mVcdFile, input_r_ce0, "(port)input_r_ce0");
    sc_trace(mVcdFile, input_r_q0, "(port)input_r_q0");
    sc_trace(mVcdFile, output_r_address0, "(port)output_r_address0");
    sc_trace(mVcdFile, output_r_ce0, "(port)output_r_ce0");
    sc_trace(mVcdFile, output_r_we0, "(port)output_r_we0");
    sc_trace(mVcdFile, output_r_d0, "(port)output_r_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_fu_94_p2, "i_fu_94_p2");
    sc_trace(mVcdFile, i_reg_170, "i_reg_170");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, zext_ln13_fu_108_p1, "zext_ln13_fu_108_p1");
    sc_trace(mVcdFile, zext_ln13_reg_175, "zext_ln13_reg_175");
    sc_trace(mVcdFile, icmp_ln11_fu_88_p2, "icmp_ln11_fu_88_p2");
    sc_trace(mVcdFile, j_fu_118_p2, "j_fu_118_p2");
    sc_trace(mVcdFile, j_reg_183, "j_reg_183");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_14_cast_fu_133_p3, "tmp_14_cast_fu_133_p3");
    sc_trace(mVcdFile, tmp_14_cast_reg_188, "tmp_14_cast_reg_188");
    sc_trace(mVcdFile, icmp_ln13_fu_112_p2, "icmp_ln13_fu_112_p2");
    sc_trace(mVcdFile, k_fu_147_p2, "k_fu_147_p2");
    sc_trace(mVcdFile, k_reg_196, "k_reg_196");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln19_2_fu_162_p1, "zext_ln19_2_fu_162_p1");
    sc_trace(mVcdFile, zext_ln19_2_reg_201, "zext_ln19_2_reg_201");
    sc_trace(mVcdFile, icmp_ln15_fu_141_p2, "icmp_ln15_fu_141_p2");
    sc_trace(mVcdFile, i_0_reg_55, "i_0_reg_55");
    sc_trace(mVcdFile, j_0_reg_66, "j_0_reg_66");
    sc_trace(mVcdFile, k_0_reg_77, "k_0_reg_77");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_fu_100_p3, "tmp_fu_100_p3");
    sc_trace(mVcdFile, zext_ln19_fu_124_p1, "zext_ln19_fu_124_p1");
    sc_trace(mVcdFile, add_ln19_fu_128_p2, "add_ln19_fu_128_p2");
    sc_trace(mVcdFile, zext_ln19_1_fu_153_p1, "zext_ln19_1_fu_153_p1");
    sc_trace(mVcdFile, add_ln19_1_fu_157_p2, "add_ln19_1_fu_157_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

pad_8_16_0_9::~pad_8_16_0_9() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void pad_8_16_0_9::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln13_fu_112_p2.read(), ap_const_lv1_1))) {
        i_0_reg_55 = i_reg_170.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_55 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln15_fu_141_p2.read(), ap_const_lv1_1))) {
        j_0_reg_66 = j_reg_183.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln11_fu_88_p2.read(), ap_const_lv1_0))) {
        j_0_reg_66 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln13_fu_112_p2.read()))) {
        k_0_reg_77 = ap_const_lv5_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        k_0_reg_77 = k_reg_196.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_170 = i_fu_94_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_183 = j_fu_118_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        k_reg_196 = k_fu_147_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln13_fu_112_p2.read()))) {
        tmp_14_cast_reg_188 = tmp_14_cast_fu_133_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln11_fu_88_p2.read(), ap_const_lv1_0))) {
        zext_ln13_reg_175 = zext_ln13_fu_108_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln15_fu_141_p2.read()))) {
        zext_ln19_2_reg_201 = zext_ln19_2_fu_162_p1.read();
    }
}

void pad_8_16_0_9::thread_add_ln19_1_fu_157_p2() {
    add_ln19_1_fu_157_p2 = (!tmp_14_cast_reg_188.read().is_01() || !zext_ln19_1_fu_153_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_14_cast_reg_188.read()) + sc_biguint<13>(zext_ln19_1_fu_153_p1.read()));
}

void pad_8_16_0_9::thread_add_ln19_fu_128_p2() {
    add_ln19_fu_128_p2 = (!zext_ln19_fu_124_p1.read().is_01() || !zext_ln13_reg_175.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln19_fu_124_p1.read()) + sc_biguint<9>(zext_ln13_reg_175.read()));
}

void pad_8_16_0_9::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pad_8_16_0_9::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void pad_8_16_0_9::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void pad_8_16_0_9::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void pad_8_16_0_9::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void pad_8_16_0_9::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln11_fu_88_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void pad_8_16_0_9::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pad_8_16_0_9::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_88_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void pad_8_16_0_9::thread_i_fu_94_p2() {
    i_fu_94_p2 = (!i_0_reg_55.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_reg_55.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void pad_8_16_0_9::thread_icmp_ln11_fu_88_p2() {
    icmp_ln11_fu_88_p2 = (!i_0_reg_55.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_55.read() == ap_const_lv4_8);
}

void pad_8_16_0_9::thread_icmp_ln13_fu_112_p2() {
    icmp_ln13_fu_112_p2 = (!j_0_reg_66.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_66.read() == ap_const_lv5_10);
}

void pad_8_16_0_9::thread_icmp_ln15_fu_141_p2() {
    icmp_ln15_fu_141_p2 = (!k_0_reg_77.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_77.read() == ap_const_lv5_10);
}

void pad_8_16_0_9::thread_input_r_address0() {
    input_r_address0 =  (sc_lv<11>) (zext_ln19_2_fu_162_p1.read());
}

void pad_8_16_0_9::thread_input_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_r_ce0 = ap_const_logic_1;
    } else {
        input_r_ce0 = ap_const_logic_0;
    }
}

void pad_8_16_0_9::thread_j_fu_118_p2() {
    j_fu_118_p2 = (!j_0_reg_66.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_reg_66.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void pad_8_16_0_9::thread_k_fu_147_p2() {
    k_fu_147_p2 = (!k_0_reg_77.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_reg_77.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void pad_8_16_0_9::thread_output_r_address0() {
    output_r_address0 =  (sc_lv<11>) (zext_ln19_2_reg_201.read());
}

void pad_8_16_0_9::thread_output_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_r_ce0 = ap_const_logic_1;
    } else {
        output_r_ce0 = ap_const_logic_0;
    }
}

void pad_8_16_0_9::thread_output_r_d0() {
    output_r_d0 = input_r_q0.read();
}

void pad_8_16_0_9::thread_output_r_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_r_we0 = ap_const_logic_1;
    } else {
        output_r_we0 = ap_const_logic_0;
    }
}

void pad_8_16_0_9::thread_tmp_14_cast_fu_133_p3() {
    tmp_14_cast_fu_133_p3 = esl_concat<9,4>(add_ln19_fu_128_p2.read(), ap_const_lv4_0);
}

void pad_8_16_0_9::thread_tmp_fu_100_p3() {
    tmp_fu_100_p3 = esl_concat<4,4>(i_0_reg_55.read(), ap_const_lv4_0);
}

void pad_8_16_0_9::thread_zext_ln13_fu_108_p1() {
    zext_ln13_fu_108_p1 = esl_zext<9,8>(tmp_fu_100_p3.read());
}

void pad_8_16_0_9::thread_zext_ln19_1_fu_153_p1() {
    zext_ln19_1_fu_153_p1 = esl_zext<13,5>(k_0_reg_77.read());
}

void pad_8_16_0_9::thread_zext_ln19_2_fu_162_p1() {
    zext_ln19_2_fu_162_p1 = esl_zext<64,13>(add_ln19_1_fu_157_p2.read());
}

void pad_8_16_0_9::thread_zext_ln19_fu_124_p1() {
    zext_ln19_fu_124_p1 = esl_zext<9,5>(j_0_reg_66.read());
}

void pad_8_16_0_9::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln11_fu_88_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln13_fu_112_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln15_fu_141_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}


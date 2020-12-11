// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __test_layerfc_weight_H__
#define __test_layerfc_weight_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct test_layerfc_weight_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
  static const unsigned AddressRange = 288;
  static const unsigned AddressWidth = 9;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(test_layerfc_weight_ram) {
        ram[0] = "0b0010100010111001";
        ram[1] = "0b0010111011001110";
        ram[2] = "0b1010001100000100";
        ram[3] = "0b0011000111111010";
        ram[4] = "0b0011001000110101";
        ram[5] = "0b0010100101000011";
        ram[6] = "0b1011100010000000";
        ram[7] = "0b1010110001111011";
        ram[8] = "0b1011000010101110";
        ram[9] = "0b1010110010101001";
        ram[10] = "0b0010110000011111";
        ram[11] = "0b1011010000001000";
        ram[12] = "0b1010010111010110";
        ram[13] = "0b1011000000011000";
        ram[14] = "0b0011011000011101";
        ram[15] = "0b1010110100000110";
        ram[16] = "0b1011101110100101";
        ram[17] = "0b1011010100111111";
        ram[18] = "0b1011000000010100";
        ram[19] = "0b0010111000110111";
        ram[20] = "0b0011010010010110";
        ram[21] = "0b1010110101101100";
        ram[22] = "0b1010111101110011";
        ram[23] = "0b1010011110001101";
        ram[24] = "0b1011010100000010";
        ram[25] = "0b0010000001100111";
        ram[26] = "0b0011000001100101";
        ram[27] = "0b0011100010001101";
        ram[28] = "0b1011110011010010";
        ram[29] = "0b1011010101011111";
        ram[30] = "0b1011000001100100";
        ram[31] = "0b1011100110000100";
        ram[32] = "0b0011110001110110";
        ram[33] = "0b0010110100111111";
        ram[34] = "0b1011100111000000";
        ram[35] = "0b0011001111011100";
        ram[36] = "0b0011000001011011";
        ram[37] = "0b1010111111000000";
        ram[38] = "0b0011010000101010";
        ram[39] = "0b1011011000001111";
        ram[40] = "0b0011000010100001";
        ram[41] = "0b1011010110001010";
        ram[42] = "0b1010110111101000";
        ram[43] = "0b1011100011101000";
        ram[44] = "0b1011010011010100";
        ram[45] = "0b1011110011010111";
        ram[46] = "0b1011001100011110";
        ram[47] = "0b1010111011100000";
        ram[48] = "0b1011101001100110";
        ram[49] = "0b1010011011100011";
        ram[50] = "0b1010111100001111";
        ram[51] = "0b1011010011011100";
        ram[52] = "0b1011110100111000";
        ram[53] = "0b1011110001000010";
        ram[54] = "0b1011101101100010";
        ram[55] = "0b0011100001011001";
        ram[56] = "0b1011010001010000";
        ram[57] = "0b0010101100001010";
        ram[58] = "0b1011110100000000";
        ram[59] = "0b1011000011101110";
        ram[60] = "0b1011000011100110";
        ram[61] = "0b0011010110010110";
        ram[62] = "0b1011110000001111";
        ram[63] = "0b1011011001011011";
        ram[64] = "0b1011111011000111";
        ram[65] = "0b0011010101000011";
        ram[66] = "0b1011001110111111";
        ram[67] = "0b0011010110010101";
        ram[68] = "0b1011000010001110";
        ram[69] = "0b1011111011010011";
        ram[70] = "0b1011001111001010";
        ram[71] = "0b0010000101111010";
        ram[72] = "0b0010010011110001";
        ram[73] = "0b1010111000110111";
        ram[74] = "0b1011001010011101";
        ram[75] = "0b1010000100101100";
        ram[76] = "0b0010011011001001";
        ram[77] = "0b0011000001010110";
        ram[78] = "0b0010000100000101";
        ram[79] = "0b1011011111010011";
        ram[80] = "0b1011010001010110";
        ram[81] = "0b1011001100100001";
        ram[82] = "0b0011010000010000";
        ram[83] = "0b1010100000010010";
        ram[84] = "0b0010011111001000";
        ram[85] = "0b1011100001101010";
        ram[86] = "0b0011010010111000";
        ram[87] = "0b0011000000111101";
        ram[88] = "0b0011000000101011";
        ram[89] = "0b1011000010100011";
        ram[90] = "0b1010101110001101";
        ram[91] = "0b1011100010011011";
        ram[92] = "0b0011000001110000";
        ram[93] = "0b0011000010011010";
        ram[94] = "0b1011000010011001";
        ram[95] = "0b1010110011000000";
        ram[96] = "0b1011100111101000";
        ram[97] = "0b1010111000010011";
        ram[98] = "0b1010111101111000";
        ram[99] = "0b1011010010111010";
        ram[100] = "0b1011011010000001";
        ram[101] = "0b1011100011110000";
        ram[102] = "0b1011101010100000";
        ram[103] = "0b0011010110001011";
        ram[104] = "0b1011011000111110";
        ram[105] = "0b0010101000000001";
        ram[106] = "0b1011110010001101";
        ram[107] = "0b1010110001101100";
        ram[108] = "0b0010110000111000";
        ram[109] = "0b0011001110101011";
        ram[110] = "0b1011010100101001";
        ram[111] = "0b1011100111000111";
        ram[112] = "0b1011111001100101";
        ram[113] = "0b0011001011011011";
        ram[114] = "0b0011000010100001";
        ram[115] = "0b0011010111100111";
        ram[116] = "0b0011011001000011";
        ram[117] = "0b1011100001100010";
        ram[118] = "0b1011000001110010";
        ram[119] = "0b0011000011010011";
        ram[120] = "0b0010111010000111";
        ram[121] = "0b0010110011110111";
        ram[122] = "0b1011000101000010";
        ram[123] = "0b1010110111100011";
        ram[124] = "0b0010101011000010";
        ram[125] = "0b0011000001100100";
        ram[126] = "0b0011010001111011";
        ram[127] = "0b1011011000100011";
        ram[128] = "0b1011001100101110";
        ram[129] = "0b1010000000100110";
        ram[130] = "0b0011000101100100";
        ram[131] = "0b0011000011001100";
        ram[132] = "0b0010111001010100";
        ram[133] = "0b1011010101111010";
        ram[134] = "0b1011011101000101";
        ram[135] = "0b0011000100010000";
        ram[136] = "0b0011001101100110";
        ram[137] = "0b1010010010001000";
        ram[138] = "0b1010111110111000";
        ram[139] = "0b1011010010110000";
        ram[140] = "0b1011010111010101";
        ram[141] = "0b0010100100100010";
        ram[142] = "0b0010110110111111";
        ram[143] = "0b0010000111110000";
        ram[144] = "0b1010101011110111";
        ram[145] = "0b0010110000101011";
        ram[146] = "0b1010101100000111";
        ram[147] = "0b0010010000101100";
        ram[148] = "0b1011011100110101";
        ram[149] = "0b1011011101100110";
        ram[150] = "0b0011001101001101";
        ram[151] = "0b0010100100010101";
        ram[152] = "0b0011010011011110";
        ram[153] = "0b1011010000100011";
        ram[154] = "0b1010111011111000";
        ram[155] = "0b0010101111111001";
        ram[156] = "0b0011000001001011";
        ram[157] = "0b1010111101010010";
        ram[158] = "0b0011011010101101";
        ram[159] = "0b0011000000011110";
        ram[160] = "0b0011010111110101";
        ram[161] = "0b1011001111011100";
        ram[162] = "0b1011010010101001";
        ram[163] = "0b1011000001000000";
        ram[164] = "0b1011101110001110";
        ram[165] = "0b1010110111111100";
        ram[166] = "0b1010110010100100";
        ram[167] = "0b0011000001100100";
        ram[168] = "0b1010101100110010";
        ram[169] = "0b0010111000100101";
        ram[170] = "0b1010010000100110";
        ram[171] = "0b1010101000000001";
        ram[172] = "0b0011010010100010";
        ram[173] = "0b0011000111001011";
        ram[174] = "0b1011001000010110";
        ram[175] = "0b1011011111010110";
        ram[176] = "0b1011101011110010";
        ram[177] = "0b0011000101100100";
        ram[178] = "0b0010000101010011";
        ram[179] = "0b0010111110001100";
        ram[180] = "0b0010111000100111";
        ram[181] = "0b0010100001111011";
        ram[182] = "0b0011000100110010";
        ram[183] = "0b0010100100000101";
        ram[184] = "0b1011001001011101";
        ram[185] = "0b1011010100000100";
        ram[186] = "0b1010101101001000";
        ram[187] = "0b1011000100111010";
        ram[188] = "0b0011010010001101";
        ram[189] = "0b0010100110001011";
        ram[190] = "0b1010110101101111";
        ram[191] = "0b1011001000100001";
        ram[192] = "0b1011010111101101";
        ram[193] = "0b1010010110001110";
        ram[194] = "0b0011000001010111";
        ram[195] = "0b0011101011100100";
        ram[196] = "0b1011101010110011";
        ram[197] = "0b1011010100110101";
        ram[198] = "0b1011001001111000";
        ram[199] = "0b0011001100110001";
        ram[200] = "0b0011101000001011";
        ram[201] = "0b1001111110010100";
        ram[202] = "0b1011011110000010";
        ram[203] = "0b0010001110100001";
        ram[204] = "0b1011000010100111";
        ram[205] = "0b0011001111001000";
        ram[206] = "0b0010111010001100";
        ram[207] = "0b1011011001001001";
        ram[208] = "0b1011011110001000";
        ram[209] = "0b0011000000100001";
        ram[210] = "0b0010101010110101";
        ram[211] = "0b0011000100101111";
        ram[212] = "0b1011100100110101";
        ram[213] = "0b1011100101101001";
        ram[214] = "0b1011001010001111";
        ram[215] = "0b0010100011001101";
        ram[216] = "0b1011011000010111";
        ram[217] = "0b0010111101011100";
        ram[218] = "0b1010110001011111";
        ram[219] = "0b1011100010000101";
        ram[220] = "0b0010110001010101";
        ram[221] = "0b0011000010010100";
        ram[222] = "0b1011100100111011";
        ram[223] = "0b0011001110000110";
        ram[224] = "0b1011101011000111";
        ram[225] = "0b1010101010110101";
        ram[226] = "0b1010110101001011";
        ram[227] = "0b0001101011000010";
        ram[228] = "0b1010110111111010";
        ram[229] = "0b0011010000001110";
        ram[230] = "0b1011010001110100";
        ram[231] = "0b1011010111111110";
        ram[232] = "0b1011101001001000";
        ram[233] = "0b0010111010000010";
        ram[234] = "0b1010110111111001";
        ram[235] = "0b0010110010001101";
        ram[236] = "0b0011001101011000";
        ram[237] = "0b1010110111001110";
        ram[238] = "0b1011001010011010";
        ram[239] = "0b0010011100111111";
        ram[240] = "0b0011000001111010";
        ram[241] = "0b0010110110001011";
        ram[242] = "0b0010101111101100";
        ram[243] = "0b1011110111001111";
        ram[244] = "0b0011001001100111";
        ram[245] = "0b0011000000111000";
        ram[246] = "0b0011010101011010";
        ram[247] = "0b1011011100001100";
        ram[248] = "0b1011110110111011";
        ram[249] = "0b0010110011010111";
        ram[250] = "0b0010110100110010";
        ram[251] = "0b1010111111000011";
        ram[252] = "0b0010110001110100";
        ram[253] = "0b1011101000111011";
        ram[254] = "0b1011010101100110";
        ram[255] = "0b0011001100111000";
        ram[256] = "0b0011001111001010";
        ram[257] = "0b1010001100010001";
        ram[258] = "0b1010001100111000";
        ram[259] = "0b1011011110101000";
        ram[260] = "0b1011100001101100";
        ram[261] = "0b0010101110101110";
        ram[262] = "0b1010001010001110";
        ram[263] = "0b0010110000000011";
        ram[264] = "0b1011100111111010";
        ram[265] = "0b0010100011000011";
        ram[266] = "0b0010100111010110";
        ram[267] = "0b0011110101100110";
        ram[268] = "0b1011101001101001";
        ram[269] = "0b1011010010010100";
        ram[270] = "0b1011110011100011";
        ram[271] = "0b1011110001011001";
        ram[272] = "0b0011111001011010";
        ram[273] = "0b1001100110001000";
        ram[274] = "0b1011101001000000";
        ram[275] = "0b1011001101110001";
        ram[276] = "0b0010101000000100";
        ram[277] = "0b0011010010111110";
        ram[278] = "0b0011110011100101";
        ram[279] = "0b1011011111011100";
        ram[280] = "0b1011111101001011";
        ram[281] = "0b1011100001010111";
        ram[282] = "0b1011000010101110";
        ram[283] = "0b1011101101001000";
        ram[284] = "0b1011110100101101";
        ram[285] = "0b1011101110111111";
        ram[286] = "0b1010010001011010";
        ram[287] = "0b1010111011010011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(test_layerfc_weight) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 288;
static const unsigned AddressWidth = 9;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


test_layerfc_weight_ram* meminst;


SC_CTOR(test_layerfc_weight) {
meminst = new test_layerfc_weight_ram("test_layerfc_weight_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~test_layerfc_weight() {
    delete meminst;
}


};//endmodule
#endif


float layerconv1_0_weight[8][3][3][3] =
    {{{{0.9289, 0.4783, 0.5688},
       {0.8723, 0.5042, 0.6180},
       {0.7632, 0.7145, 0.3431}},

      {{-0.1086, 0.2860, 0.2630},
       {-0.1062, -0.0312, -0.0523},
       {-0.1482, -0.0402, 0.0799}},

      {{-0.6558, -0.5876, -0.6787},
       {-0.5777, -0.6775, -0.4984},
       {-0.5476, -0.5120, -0.2911}}},

     {{{-0.3569, -0.6730, -0.6560},
       {-0.4379, -0.5210, -0.6619},
       {-0.4990, -0.5359, -0.5416}},

      {{0.2530, 0.0223, -0.4703},
       {0.0220, 0.0250, -0.3812},
       {0.1734, 0.2372, -0.2579}},

      {{0.2731, -0.2302, -0.2307},
       {0.1786, -0.2507, -0.1278},
       {0.2435, 0.1540, -0.3874}}},

     {{{0.5539, 0.1103, 0.4397},
       {0.2767, 0.3635, 0.1710},
       {0.1910, 0.1955, 0.5170}},

      {{0.1324, -0.1443, -0.1627},
       {0.1666, -0.1362, -0.3278},
       {-0.2597, -0.0987, 0.0970}},

      {{-0.4499, -0.4032, -0.2709},
       {-0.4567, -0.4600, -0.6143},
       {-0.6554, -0.5309, -0.5091}}},

     {{{-0.7012, -0.6410, -0.5179},
       {-0.5604, -0.6479, -0.6352},
       {-0.5762, -0.5375, -0.8276}},

      {{0.1477, 0.2017, -0.1263},
       {-0.0649, 0.2003, 0.1738},
       {0.1165, -0.1725, 0.0759}},

      {{0.5536, 0.3249, 0.4951},
       {0.4042, 0.5187, 0.3807},
       {0.0581, 0.2324, 0.4629}}},

     {{{0.1420, -0.2868, 0.0541},
       {0.3946, 0.0440, -0.0561},
       {0.3254, -0.2572, -0.3396}},

      {{0.3810, -0.4595, 0.0146},
       {0.0496, -0.2746, -0.4797},
       {-0.2040, -0.2133, -0.6593}},

      {{-0.3283, -0.4656, -0.5915},
       {-0.5303, -0.4149, -0.5352},
       {-0.6493, -0.5140, -0.6974}}},

     {{{-0.3052, -0.2347, -0.4702},
       {-0.5340, -0.5094, -0.3058},
       {-0.5412, -0.4672, -0.3743}},

      {{-0.6724, -0.6186, -0.4863},
       {-0.8418, -0.8087, -0.9018},
       {-0.8470, -0.7954, -0.6319}},

      {{-0.4119, -0.4011, -0.5287},
       {-0.4139, -0.3477, -0.4077},
       {-0.6129, -0.7104, -0.5544}}},

     {{{-0.5220, -0.6278, -0.4902},
       {-0.5477, -0.4846, -0.5830},
       {-0.6456, -0.6697, -0.4162}},

      {{-0.0310, 0.1869, 0.1380},
       {0.0852, 0.0346, 0.2022},
       {-0.1966, 0.1521, 0.1281}},

      {{0.3980, 0.4203, 0.3987},
       {0.0993, 0.2941, 0.4606},
       {0.0078, 0.2821, 0.2028}}},

     {{{-0.5817, -0.4630, -0.4482},
       {-0.6486, -0.3875, -0.5983},
       {-0.5687, -0.6961, -0.6389}},

      {{0.1549, 0.1460, 0.1744},
       {0.0163, 0.1938, 0.2237},
       {0.1195, 0.0406, -0.1099}},

      {{0.5155, 0.3730, 0.4037},
       {0.4037, 0.4304, 0.5160},
       {0.4135, 0.5981, 0.6388}}}};

float layerconv1_0_bias[8] =
    {0.0057, 0.1051, 0.3047, 0.2097, 0.1061, 0.1921, 0.1812, -0.0304};

float layerconv2_0_weight[16][8][3][3] =
    {{{{-2.8432e-02, -2.2326e-02, -1.5916e-02},
       {-3.9187e-02, -1.1164e-01, -7.2572e-02},
       {-1.6077e-01, -2.4683e-02, -2.6839e-02}},

      {{1.3754e-02, -4.8678e-02, 5.7074e-02},
       {-3.1328e-02, 1.7651e-03, -6.4968e-02},
       {-1.3029e-01, 3.7191e-02, 2.7594e-03}},

      {{-5.5735e-02, 3.5543e-02, -8.2171e-02},
       {-7.3466e-02, -3.5043e-02, -1.3347e-01},
       {-1.5231e-02, -5.2730e-02, -1.2174e-01}},

      {{-1.1474e-01, -5.5993e-02, -1.8122e-02},
       {-4.9114e-02, -2.8771e-02, -1.9220e-02},
       {-3.7617e-03, -1.3000e-01, -1.1378e-01}},

      {{-1.7508e-01, 2.9905e-02, 3.7803e-02},
       {-2.9163e-02, -1.6049e-01, 2.4596e-02},
       {4.6662e-02, -1.5663e-01, 2.8310e-02}},

      {{-1.6526e-01, -1.2572e-01, -1.7031e-02},
       {5.5081e-02, -4.3667e-02, 3.9161e-02},
       {5.3998e-02, -1.7302e-01, -3.1591e-02}},

      {{-1.4786e-01, -1.5122e-01, -4.1088e-02},
       {-1.4629e-01, -1.7503e-01, -1.4718e-01},
       {3.4821e-02, -5.5796e-02, -1.1082e-01}},

      {{-4.4975e-02, -1.3545e-01, -1.0543e-01},
       {3.6976e-02, -1.1024e-01, -1.4704e-02},
       {-5.4784e-02, -4.7976e-02, 1.2143e-02}}},

     {{{-4.1673e-02, 2.2519e-01, 8.3990e-02},
       {-1.6055e-01, 4.3841e-02, 9.5029e-02},
       {-1.5012e-01, 1.5508e-02, -6.0587e-03}},

      {{-5.5680e-02, -1.7817e-01, -1.5882e-02},
       {-2.1343e-01, -2.1627e-02, -8.6121e-02},
       {-2.0048e-02, -1.1462e-01, 2.8481e-02}},

      {{-1.9718e-01, -7.6467e-02, -2.1782e-01},
       {-1.9948e-01, -1.6738e-01, -3.5433e-03},
       {-1.8291e-01, -9.9900e-02, -1.2388e-01}},

      {{5.0314e-02, 1.4463e-02, -7.1298e-02},
       {-1.3183e-01, -1.9901e-01, -1.7830e-01},
       {-1.9450e-01, -1.9968e-02, -1.1325e-01}},

      {{-8.3947e-02, -1.3720e-01, -8.2438e-02},
       {-7.1734e-02, -1.5986e-01, -6.7866e-03},
       {-5.0876e-02, -9.0113e-02, -1.0468e-01}},

      {{-2.7404e-02, 5.6669e-02, -1.8567e-01},
       {5.3913e-02, -3.7233e-03, 7.1427e-02},
       {-4.7800e-02, -1.3822e-01, -1.2223e-01}},

      {{-9.0612e-02, -1.5162e-01, -1.2952e-01},
       {-1.5007e-01, -1.1088e-01, -3.0560e-02},
       {-2.3467e-01, -1.2071e-01, -1.1620e-01}},

      {{3.3866e-02, -2.0701e-01, -1.1500e-01},
       {3.1720e-02, 4.3850e-02, -1.4706e-01},
       {-9.3605e-03, -3.2467e-03, -2.1179e-01}}},

     {{{5.5681e-01, 4.8853e-01, 4.1943e-01},
       {6.8422e-01, 6.6415e-01, 6.3735e-01},
       {7.3258e-01, 6.2713e-01, 5.6863e-01}},

      {{-3.3123e-01, -2.7697e-01, -3.3707e-01},
       {-3.3959e-01, -3.7510e-01, -2.8858e-01},
       {-3.8081e-01, -4.1516e-01, -3.6004e-01}},

      {{3.5542e-01, 3.2367e-01, 3.2676e-01},
       {3.6006e-01, 3.6816e-01, 2.7728e-01},
       {3.9317e-01, 3.7732e-01, 2.1035e-01}},

      {{-8.2930e-02, -2.1775e-01, -4.6143e-02},
       {-1.6880e-01, -1.9843e-01, -1.4783e-01},
       {-2.7139e-01, -2.3387e-01, -2.6202e-01}},

      {{7.6896e-02, 5.4448e-02, 1.0919e-01},
       {1.0152e-01, 7.0701e-02, 2.3379e-01},
       {5.8053e-02, 1.5779e-01, 4.6146e-02}},

      {{-1.9699e-01, -1.8757e-01, -1.6072e-01},
       {-2.2504e-01, -2.8478e-01, -3.0761e-01},
       {-3.1501e-01, -1.1597e-01, -1.2759e-01}},

      {{-9.9647e-02, -2.5578e-01, -2.3663e-01},
       {-2.4633e-01, -1.6607e-01, -1.3926e-01},
       {-2.6991e-01, -7.8470e-02, -1.7113e-01}},

      {{-2.0913e-01, 2.1396e-02, -1.3597e-01},
       {-1.7212e-01, -2.2143e-01, -1.0432e-01},
       {-1.4022e-01, -6.6715e-02, -2.2483e-01}}},

     {{{-6.6521e-02, -1.0065e-01, -7.6592e-02},
       {-1.5210e-01, -8.5158e-02, -2.2319e-02},
       {-1.1549e-01, -1.4895e-01, -1.2069e-01}},

      {{-1.5382e-01, -3.6180e-02, -1.2722e-01},
       {-1.6303e-01, 2.3744e-02, -1.5783e-01},
       {-1.6295e-01, -8.5124e-02, -5.3418e-03}},

      {{-4.9213e-02, -1.3315e-01, -1.4407e-01},
       {-6.4443e-02, -1.2078e-02, 2.7626e-03},
       {2.8845e-02, -2.3974e-02, 4.5222e-02}},

      {{3.6963e-02, 4.6275e-02, -8.1175e-02},
       {-8.2929e-02, -7.8676e-02, -5.0894e-03},
       {-5.1764e-02, -3.6845e-02, -9.0389e-02}},

      {{1.0958e-01, 3.5205e-02, -7.3616e-02},
       {-1.0505e-01, -2.6206e-02, -1.8324e-01},
       {-1.0170e-01, 2.8189e-02, -5.9845e-02}},

      {{2.1013e-02, 8.8686e-03, -5.7190e-02},
       {5.3131e-02, -4.9000e-02, -8.7751e-02},
       {1.7966e-02, -1.5032e-02, -1.6779e-01}},

      {{-1.7237e-01, -1.3628e-01, -1.0318e-01},
       {-3.8042e-02, 2.4754e-02, 1.6760e-02},
       {-6.6750e-02, -1.0878e-01, -4.7153e-02}},

      {{-4.5520e-02, -4.5662e-02, 3.9142e-02},
       {-1.8678e-01, -1.4406e-01, -1.4606e-01},
       {-1.1572e-01, -4.4405e-02, 3.0766e-02}}},

     {{{-1.7105e-01, -7.8090e-02, -1.5108e-01},
       {-1.1391e-01, 1.2745e-01, -8.8002e-02},
       {-8.6047e-02, -3.8691e-02, 8.1902e-02}},

      {{4.4051e-02, 3.2771e-02, -1.7205e-02},
       {1.5776e-02, -6.5282e-02, -6.5325e-03},
       {-1.5649e-01, -8.7103e-02, 3.4557e-02}},

      {{-2.7256e-03, 5.3446e-03, 5.6498e-02},
       {-1.7298e-01, -5.4340e-02, -1.3386e-01},
       {-6.8900e-03, 3.1238e-03, -7.5299e-02}},

      {{-1.2238e-01, 1.0024e-02, -4.0542e-02},
       {4.4821e-02, -2.4698e-02, -1.1802e-01},
       {5.3690e-02, -1.4493e-01, -1.4431e-01}},

      {{1.3760e-02, 3.4166e-02, -1.4387e-01},
       {2.7671e-02, -1.3237e-01, -2.2150e-02},
       {7.3990e-02, 8.8068e-02, -2.6447e-02}},

      {{3.1060e-02, 4.3669e-02, -3.4032e-02},
       {-1.5342e-02, -2.6373e-02, -2.4897e-02},
       {-5.5335e-02, -1.4235e-01, -6.4089e-02}},

      {{-9.6675e-02, -4.1115e-02, -1.0714e-01},
       {-5.3053e-02, -7.8160e-02, -1.2051e-01},
       {3.2547e-02, -1.6261e-01, 6.8683e-03}},

      {{-9.7342e-02, -7.2193e-02, -8.2795e-02},
       {-1.7288e-01, -1.6831e-01, -1.4358e-01},
       {-1.2070e-01, -1.6300e-01, 4.1139e-03}}},

     {{{1.7753e-02, -1.3722e-01, -1.2802e-01},
       {7.4360e-03, -1.0591e-01, -1.7480e-02},
       {-1.5182e-01, -1.3492e-01, -1.7524e-01}},

      {{1.6460e-02, -4.1026e-02, -1.5610e-01},
       {-1.1507e-01, 8.4850e-02, -4.2518e-02},
       {-1.2457e-01, 1.1011e-01, 4.0869e-02}},

      {{2.4004e-02, -1.0645e-01, -1.6272e-02},
       {2.4829e-03, -1.6653e-01, -1.2846e-01},
       {-1.4871e-01, -1.5151e-01, -5.5370e-02}},

      {{-1.4657e-02, -4.8124e-02, -1.6904e-01},
       {-2.9633e-03, -1.3262e-01, -1.3386e-01},
       {-1.4259e-01, -1.1981e-02, -7.1286e-02}},

      {{-6.5498e-02, -1.6006e-01, -1.3489e-01},
       {-4.7479e-02, -6.3393e-02, -4.1088e-02},
       {-1.6901e-01, -1.5559e-01, -7.4204e-02}},

      {{8.9944e-04, 1.2769e-02, -5.6886e-02},
       {3.6021e-02, -1.4749e-01, -1.1678e-01},
       {-1.8622e-01, -9.3304e-02, -1.0599e-01}},

      {{-1.3803e-01, -9.1798e-03, 6.1277e-04},
       {-1.4347e-01, -3.8507e-03, -7.1453e-02},
       {-9.9997e-02, 1.6983e-02, -2.3104e-02}},

      {{-1.0445e-02, -1.1473e-01, -4.8866e-02},
       {6.6613e-03, -3.6343e-02, -1.3071e-01},
       {-1.5355e-01, -1.5649e-01, -1.0258e-01}}},

     {{{-3.2585e-01, -2.7927e-01, -2.0442e-01},
       {-2.7253e-01, -1.8462e-01, -1.5974e-01},
       {-3.1124e-01, -2.3168e-01, -3.4106e-01}},

      {{2.7604e-01, 2.4845e-01, 1.9461e-01},
       {2.6466e-01, 4.0817e-01, 3.6927e-01},
       {3.9046e-01, 3.9735e-01, 3.2941e-01}},

      {{-1.2023e-01, -2.7794e-02, -1.5385e-01},
       {1.0380e-01, 3.2477e-02, -8.3690e-02},
       {8.4015e-02, 6.9105e-02, -7.1324e-02}},

      {{1.6052e-01, 1.9529e-01, 2.8741e-01},
       {2.5251e-01, 2.6342e-01, 2.9727e-01},
       {2.8877e-01, 2.1454e-01, 3.4099e-01}},

      {{1.5460e-01, 1.5304e-01, -1.0284e-02},
       {2.7060e-01, 7.6263e-02, -2.6710e-02},
       {1.3247e-01, 9.5495e-02, 7.1384e-02}},

      {{6.6566e-02, 4.9507e-02, -7.5236e-02},
       {-8.7220e-03, 8.1887e-02, 1.5675e-01},
       {8.7551e-02, -1.5247e-02, -2.2270e-02}},

      {{3.5527e-02, 2.5525e-01, 1.7951e-01},
       {1.4537e-01, 2.5745e-01, 2.2744e-01},
       {2.6483e-01, 2.9197e-01, 1.9581e-01}},

      {{3.9825e-01, 3.9580e-01, 3.3352e-01},
       {2.6280e-01, 2.8927e-01, 4.2725e-01},
       {4.2907e-01, 3.8119e-01, 3.3609e-01}}},

     {{{-4.7683e-02, -9.2862e-02, -7.4821e-03},
       {4.3050e-03, -1.9600e-01, -8.4358e-02},
       {-1.5894e-01, 4.3046e-02, -1.8039e-01}},

      {{5.8717e-02, 8.8828e-02, 5.6006e-02},
       {5.8640e-02, 5.3087e-03, 8.7551e-03},
       {1.4953e-01, 1.3008e-01, -8.3538e-02}},

      {{-3.7421e-02, -1.1715e-01, -1.6965e-01},
       {3.1061e-02, -1.2227e-01, -1.0504e-01},
       {5.8038e-02, -1.5609e-01, 3.9518e-02}},

      {{-5.1220e-02, 3.1417e-02, -5.0657e-02},
       {9.7657e-02, -2.7019e-02, -1.4822e-01},
       {7.1251e-02, -8.5291e-02, -1.3760e-01}},

      {{4.0168e-02, 4.1775e-03, -4.9719e-02},
       {-5.8845e-02, 2.0003e-02, -5.9461e-02},
       {1.2412e-02, 1.0157e-01, 3.0044e-02}},

      {{6.1182e-03, -3.5722e-02, -9.7981e-02},
       {1.7786e-02, -5.2731e-02, -4.7043e-02},
       {-3.1183e-02, -1.2279e-01, 4.4401e-02}},

      {{-2.3959e-01, -9.3957e-02, -2.1343e-01},
       {-6.9420e-02, -1.0652e-01, -1.1305e-01},
       {-5.9779e-02, -2.7876e-02, -1.8983e-01}},

      {{-9.6432e-02, -1.1226e-01, 9.2190e-02},
       {-1.3376e-01, -7.0438e-02, -2.0247e-01},
       {-2.0688e-01, -1.1885e-01, -3.7224e-02}}},

     {{{1.0252e-01, 9.0734e-02, 1.3369e-01},
       {-4.8606e-02, 6.5720e-02, 6.7065e-02},
       {-4.0853e-02, 6.1580e-02, 1.1862e-01}},

      {{2.9733e-01, 1.8443e-02, 2.0022e-01},
       {2.0312e-01, 1.8105e-01, 1.3951e-01},
       {4.1591e-01, 3.9190e-01, 3.5924e-01}},

      {{2.7989e-01, 2.7374e-01, 3.0037e-01},
       {4.0705e-01, 2.6933e-01, 4.2572e-01},
       {3.7750e-01, 4.0612e-01, 5.3126e-01}},

      {{-1.3403e-01, -2.1856e-01, -1.2601e-01},
       {-3.8221e-02, -1.3185e-01, -1.6680e-01},
       {-1.0700e-01, -1.3040e-01, -5.0823e-02}},

      {{5.0231e-01, 4.5602e-01, 4.1654e-01},
       {6.8088e-01, 5.8452e-01, 6.0449e-01},
       {8.1251e-01, 7.3379e-01, 7.5696e-01}},

      {{2.7159e-01, 2.9913e-01, 4.3754e-01},
       {5.5921e-01, 4.2871e-01, 5.4751e-01},
       {7.1940e-01, 7.3773e-01, 7.0932e-01}},

      {{-9.7094e-02, -1.6713e-02, -2.9156e-02},
       {-1.6614e-01, 3.5698e-02, -1.0271e-01},
       {-4.0256e-02, -7.6973e-02, 1.1766e-02}},

      {{-2.4568e-01, -3.3686e-01, -4.2788e-01},
       {-2.2382e-01, -2.6987e-01, -2.7155e-01},
       {-2.0077e-01, -1.4072e-01, -2.7418e-01}}},

     {{{4.5673e-02, -1.5652e-01, -3.2170e-02},
       {-1.4971e-02, -2.9459e-02, 5.1450e-03},
       {-1.0212e-01, -1.8317e-01, -1.6174e-01}},

      {{-7.3766e-02, -9.9872e-02, -5.2153e-02},
       {-6.3172e-02, 9.2889e-03, -6.2595e-02},
       {1.3473e-02, -1.5804e-01, -8.3303e-02}},

      {{-1.2785e-01, -6.4480e-02, 4.9062e-02},
       {5.0278e-02, -1.1957e-01, -4.5750e-02},
       {-6.6218e-02, -1.6036e-01, -5.8232e-02}},

      {{-5.4838e-02, -7.3259e-02, 1.5183e-02},
       {1.4749e-02, -2.0464e-02, -4.7768e-02},
       {-1.5071e-01, 4.4462e-04, 1.9432e-02}},

      {{1.7398e-02, 4.6864e-02, 3.3094e-02},
       {-3.4573e-02, -2.2619e-02, -7.6751e-02},
       {-1.5493e-01, -1.6229e-04, 6.7079e-02}},

      {{1.4157e-02, -1.2126e-01, 2.2127e-02},
       {7.0442e-02, -1.3496e-01, -1.1155e-01},
       {-1.2476e-01, -1.1560e-01, -9.0136e-02}},

      {{-7.2866e-02, -2.8371e-02, -1.0085e-01},
       {-1.3478e-01, -2.8385e-02, 5.5088e-02},
       {-1.2983e-01, -7.6247e-02, -1.4977e-02}},

      {{-1.3865e-01, -1.5552e-01, -1.4349e-01},
       {-5.9279e-03, -1.8711e-01, 1.2167e-02},
       {-1.1986e-01, -1.8437e-01, -8.7412e-02}}},

     {{{4.3916e-01, 5.1904e-01, 5.0077e-01},
       {5.3216e-01, 6.2205e-01, 5.4745e-01},
       {5.5749e-01, 5.4304e-01, 5.6727e-01}},

      {{-4.8443e-01, -3.9750e-01, -4.9804e-01},
       {-4.1664e-01, -3.3960e-01, -3.3873e-01},
       {-3.0032e-01, -2.4111e-01, -5.3422e-01}},

      {{2.7306e-01, 4.2699e-01, 4.0092e-01},
       {1.7195e-01, 3.2655e-01, 2.9153e-01},
       {2.5446e-01, 3.9687e-01, 3.1307e-01}},

      {{-4.1311e-02, -2.6522e-02, -4.6674e-02},
       {5.9216e-02, 1.5213e-02, -1.3066e-01},
       {4.9200e-02, -1.0849e-01, -1.0370e-01}},

      {{2.1510e-01, 3.5928e-01, 2.4176e-01},
       {2.8467e-01, 1.9759e-01, 2.8681e-01},
       {1.7725e-01, 1.1720e-01, 2.1390e-01}},

      {{-4.7119e-01, -4.6414e-01, -5.3179e-01},
       {-4.2176e-01, -4.4977e-01, -5.1959e-01},
       {-5.6268e-01, -5.2296e-01, -4.1392e-01}},

      {{-2.8670e-02, -2.0337e-02, -4.4076e-02},
       {8.4117e-02, -9.8849e-03, -8.3452e-02},
       {-8.7956e-03, -1.7838e-02, -1.0426e-02}},

      {{-2.2036e-01, -7.6042e-02, -2.1774e-01},
       {-1.4180e-01, -9.5575e-02, -1.4638e-01},
       {2.4327e-02, -9.7096e-02, -1.4583e-01}}},

     {{{-5.2313e-01, -4.8936e-01, -5.1810e-01},
       {-4.6475e-01, -5.7981e-01, -5.0857e-01},
       {-6.7046e-01, -5.3873e-01, -6.3962e-01}},

      {{3.7428e-01, 2.9923e-01, 3.2878e-01},
       {4.4730e-01, 4.1571e-01, 4.3520e-01},
       {6.3534e-01, 5.1291e-01, 5.9045e-01}},

      {{-4.0234e-01, -4.7087e-01, -5.0678e-01},
       {-4.1054e-01, -3.1384e-01, -3.1979e-01},
       {-3.9030e-01, -5.9042e-01, -5.0619e-01}},

      {{5.6107e-01, 5.7432e-01, 5.6128e-01},
       {6.2044e-01, 5.6390e-01, 6.0049e-01},
       {4.6653e-01, 4.8362e-01, 6.2666e-01}},

      {{-3.9839e-02, -1.4791e-02, -1.2838e-01},
       {-4.1609e-02, -3.6399e-02, -1.1317e-01},
       {-1.3548e-01, -1.4866e-01, -2.8902e-01}},

      {{-8.0080e-03, 1.5567e-01, 3.1768e-02},
       {1.1369e-01, 6.4314e-02, 1.9147e-01},
       {2.5750e-01, 1.7656e-01, -5.0296e-03}},

      {{4.2036e-01, 4.4505e-01, 3.0918e-01},
       {3.1970e-01, 4.3158e-01, 4.4548e-01},
       {4.5501e-01, 3.0113e-01, 3.9484e-01}},

      {{6.6576e-01, 6.5413e-01, 5.4075e-01},
       {6.2140e-01, 4.8559e-01, 6.9739e-01},
       {6.4346e-01, 6.4270e-01, 7.3850e-01}}},

     {{{6.7827e-01, 7.0270e-01, 5.1126e-01},
       {4.9413e-01, 5.9576e-01, 4.8825e-01},
       {6.6583e-01, 6.5783e-01, 6.7794e-01}},

      {{-4.4621e-01, -3.0228e-01, -2.8306e-01},
       {-3.4546e-01, -3.0824e-01, -2.8422e-01},
       {-4.6381e-01, -4.2201e-01, -2.5919e-01}},

      {{3.8193e-01, 3.0304e-01, 2.0819e-01},
       {3.0763e-01, 2.6364e-01, 3.2838e-01},
       {4.7112e-01, 2.5756e-01, 2.7504e-01}},

      {{-2.7810e-01, -2.5351e-01, -3.1693e-01},
       {-3.7787e-01, -3.3794e-01, -3.4799e-01},
       {-2.2479e-01, -3.4228e-01, -3.6019e-01}},

      {{2.1689e-01, 8.3559e-02, 1.3046e-01},
       {1.4959e-01, 4.6944e-02, 2.2493e-01},
       {2.2327e-01, 1.8274e-01, 1.0036e-01}},

      {{7.8655e-02, 6.0028e-02, 9.1556e-02},
       {1.3740e-01, 8.7905e-02, 8.5375e-03},
       {9.5580e-02, -2.0000e-02, 7.6897e-03}},

      {{-1.9342e-01, -2.5729e-01, -2.1421e-01},
       {-2.0427e-01, -2.0824e-01, -2.7150e-01},
       {-2.8088e-01, -1.3702e-01, -3.6464e-01}},

      {{-2.9868e-01, -8.0744e-02, -1.8963e-01},
       {-1.9701e-01, -9.1215e-02, -2.0630e-01},
       {-2.5131e-01, -2.2050e-01, -1.2456e-01}}},

     {{{-1.1517e-01, -1.4301e-01, -4.9863e-02},
       {9.1448e-03, 1.6124e-02, -7.2239e-02},
       {3.8825e-02, 2.9758e-02, -1.9176e-01}},

      {{1.3271e-02, -1.7938e-02, -5.0179e-02},
       {-7.1475e-02, -1.4767e-01, -9.1044e-02},
       {3.6929e-02, -3.1338e-02, -1.0258e-01}},

      {{2.6766e-02, -1.3603e-01, 2.5324e-02},
       {-4.4893e-02, -6.1713e-02, -1.0280e-01},
       {-1.2222e-01, -1.5053e-01, -1.1096e-01}},

      {{2.4196e-04, -1.9425e-01, 2.7969e-02},
       {-1.1131e-01, 1.2129e-03, -7.3346e-04},
       {-3.6849e-02, -7.2887e-02, -1.8755e-01}},

      {{-1.1936e-01, -4.8344e-02, 1.4851e-02},
       {-1.8096e-01, -1.1528e-01, -1.4761e-03},
       {1.0617e-02, -1.2238e-01, -1.0927e-01}},

      {{-7.0676e-02, -2.7690e-02, -1.8128e-01},
       {-1.0256e-01, -1.9141e-01, 2.2898e-02},
       {-7.0475e-02, -7.4773e-02, -1.0862e-01}},

      {{-1.9316e-01, -1.7174e-01, -1.9253e-01},
       {2.0520e-02, -1.8123e-01, -1.7517e-01},
       {4.0766e-04, -6.9657e-02, -2.9241e-02}},

      {{1.0346e-02, -1.2063e-01, -1.1024e-01},
       {-1.1327e-01, 2.4625e-02, -3.1439e-02},
       {-1.3230e-01, -3.5961e-02, -5.7616e-02}}},

     {{{-1.2054e-02, -6.8173e-02, -8.7918e-02},
       {-9.6584e-02, -3.6669e-02, -1.6825e-01},
       {-4.1108e-02, -5.0732e-02, -1.2934e-01}},

      {{-8.8906e-02, -5.1820e-02, -1.4690e-01},
       {-1.8642e-01, 2.0402e-02, -8.2324e-02},
       {1.2865e-02, -4.1493e-02, -1.4114e-01}},

      {{2.0880e-02, -4.5892e-02, -8.9319e-02},
       {-7.3066e-02, -1.3628e-01, -2.0901e-02},
       {-7.2025e-02, -8.5745e-02, -1.1745e-02}},

      {{1.9778e-02, -2.3473e-02, -8.0697e-02},
       {-8.4420e-03, -1.0358e-01, 3.5432e-02},
       {-5.3680e-02, -1.7205e-02, -1.2387e-01}},

      {{-6.8515e-02, -1.0300e-01, 8.1110e-03},
       {-7.9120e-02, -2.5054e-02, 2.1720e-02},
       {-1.1888e-01, 5.8067e-02, -1.6495e-02}},

      {{-1.8809e-02, -7.5058e-02, -1.1426e-01},
       {-8.7339e-02, -4.0925e-02, -1.1544e-01},
       {-4.4015e-02, -7.8492e-02, -1.1870e-01}},

      {{-1.6182e-01, -1.8935e-01, -1.3343e-01},
       {-1.1927e-01, 3.2255e-02, -9.9435e-02},
       {-1.0097e-01, -1.6364e-02, -1.1982e-01}},

      {{-9.1427e-02, -1.6724e-01, -6.2004e-02},
       {-9.8181e-02, -1.8779e-02, -1.9935e-01},
       {-1.0145e-01, -1.0914e-02, -1.6090e-01}}},

     {{{4.0370e-01, 5.6434e-01, 4.6284e-01},
       {3.7653e-01, 5.6241e-01, 4.4456e-01},
       {4.4102e-01, 4.5428e-01, 4.4767e-01}},

      {{-8.8248e-02, -2.2289e-02, -1.1436e-01},
       {-3.9521e-02, 7.8107e-02, 7.3218e-02},
       {-1.8164e-02, 9.7025e-02, 1.4319e-01}},

      {{2.3055e-01, 2.8803e-01, 3.5283e-01},
       {3.4071e-01, 4.5797e-01, 4.0903e-01},
       {4.5061e-01, 3.3337e-01, 3.6742e-01}},

      {{-1.9452e-01, -2.7725e-01, -3.3164e-01},
       {-4.0921e-01, -4.0089e-01, -1.8453e-01},
       {-2.7478e-01, -2.3266e-01, -3.8523e-01}},

      {{2.8118e-01, 3.9135e-01, 4.1184e-01},
       {3.6612e-01, 4.0370e-01, 4.5867e-01},
       {2.7175e-01, 4.2113e-01, 3.8973e-01}},

      {{1.8947e-01, 2.3286e-01, 6.3620e-02},
       {2.8480e-01, 1.4562e-01, 2.3787e-01},
       {3.2005e-01, 3.5095e-01, 1.6712e-01}},

      {{-1.1581e-01, -2.0382e-01, -2.8904e-01},
       {-1.3203e-01, -1.4318e-01, -2.8677e-01},
       {-2.3084e-01, -2.0970e-01, -2.1374e-01}},

      {{-2.8048e-01, -3.9248e-01, -3.4302e-01},
       {-3.7173e-01, -2.9495e-01, -3.5780e-01},
       {-4.8012e-01, -3.1498e-01, -3.4353e-01}}}};

float layerconv2_0_bias[16] =
    {-0.0957, -0.2125, -0.0534, -0.1310, -0.1154, -0.0426, 0.0248, -0.0302,
     0.0818, -0.0562, -0.0420, 0.0962, 0.1312, -0.0807, 0.0282, -0.0220};

float layerfc_weight[6][16] =
    {{6.4398e-02, -9.3647e-02, -4.1742e-01, 1.4480e-01, 8.9366e-02,
      1.6192e-03, 8.8258e-02, 1.1774e-01, 2.7292e-01, 1.6639e-01,
      -3.9861e-01, -1.9614e-01, -3.0471e-01, 2.2627e-01, -1.9205e-01,
      -1.3459e-01},
     {-6.7299e-02, 1.9031e-01, 3.8753e-01, 3.5551e-02, -2.5320e-01,
      -2.6309e-01, -4.1089e-01, -2.3117e-01, -1.0406e-01, 6.7368e-02,
      7.7272e-01, -4.5004e-01, 2.7751e-01, 9.8082e-02, 1.4794e-01,
      4.5496e-02},
     {-6.9545e-02, -1.4944e-01, -7.9922e-01, 1.1505e-01, -1.0963e-01,
      6.9128e-02, 1.6092e-01, 2.8539e-01, -2.3713e-01, 9.7507e-02,
      -3.8676e-02, 1.9619e-01, -3.6660e-01, -1.5935e-01, -7.5210e-03,
      -7.1046e-01},
     {1.2922e-01, 1.8538e-01, -4.6132e-01, -1.3663e-01, 6.8806e-03,
      -1.0306e-01, -1.5779e-01, -2.0622e-02, 4.4149e-01, -1.9997e-01,
      -7.3041e-01, -5.9565e-01, 2.3276e-03, -1.3177e-01, -4.8297e-02,
      2.1074e-01},
     {1.7950e-01, -1.3258e-01, -2.7234e-01, -1.3301e-01, 5.2949e-02,
      7.1134e-02, 3.5737e-01, 1.8236e-04, -9.1209e-01, -1.3587e-01,
      -2.2257e-01, 3.2579e-01, -4.3693e-01, 1.6387e-01, -2.4068e-01,
      -2.5145e-01},
     {1.0045e-01, -2.2724e-01, 1.6421e-01, 4.2103e-02, 1.0199e-01,
      -4.0537e-02, -5.4437e-01, 1.9172e-01, 2.0131e-01, -1.4841e-01,
      -2.5047e-01, -4.4017e-01, 5.0421e-01, -1.4737e-01, -2.3890e-01,
      1.5916e-01}};

float layerfc_bias[6] =
    {0.0357, 0.0822, 0.0706, -0.1723, -0.1413, 0.2115};

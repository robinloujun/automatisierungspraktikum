  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 13;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (FuzzyNeuro_P)
    ;%
      section.nData     = 169;
      section.data(169)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.Switch_Threshold
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.Out1_Y0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_P.One_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_P.Out1_Y0_a
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_P.One_Value_j
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_P.Out1_Y0_aa
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_P._Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_P.Out1_Y0_c
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% FuzzyNeuro_P._Value_f
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% FuzzyNeuro_P.Out1_Y0_g
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% FuzzyNeuro_P._Value_g
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% FuzzyNeuro_P.Out1_Y0_b
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% FuzzyNeuro_P._Value_l
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% FuzzyNeuro_P.Out1_Y0_f
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% FuzzyNeuro_P._Value_j
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% FuzzyNeuro_P.Out1_Y0_j
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% FuzzyNeuro_P._Value_gn
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% FuzzyNeuro_P.Out1_Y0_jm
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% FuzzyNeuro_P._Value_p
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% FuzzyNeuro_P.Out1_Y0_d
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% FuzzyNeuro_P._Value_h
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% FuzzyNeuro_P.Out1_Y0_ja
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% FuzzyNeuro_P._Value_gd
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% FuzzyNeuro_P.Out1_Y0_e
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% FuzzyNeuro_P._Value_a
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% FuzzyNeuro_P.Out1_Y0_h
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% FuzzyNeuro_P._Value_ff
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% FuzzyNeuro_P.Out1_Y0_ez
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% FuzzyNeuro_P._Value_o
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% FuzzyNeuro_P.IW111_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% FuzzyNeuro_P.IW1110_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 31;
	
	  ;% FuzzyNeuro_P.IW112_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 33;
	
	  ;% FuzzyNeuro_P.IW113_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 35;
	
	  ;% FuzzyNeuro_P.IW114_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 37;
	
	  ;% FuzzyNeuro_P.IW115_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 39;
	
	  ;% FuzzyNeuro_P.IW116_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 41;
	
	  ;% FuzzyNeuro_P.IW117_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 43;
	
	  ;% FuzzyNeuro_P.IW118_Value
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 45;
	
	  ;% FuzzyNeuro_P.IW119_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 47;
	
	  ;% FuzzyNeuro_P.b1_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 49;
	
	  ;% FuzzyNeuro_P.Gain_Gain
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 59;
	
	  ;% FuzzyNeuro_P.one_Value
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 60;
	
	  ;% FuzzyNeuro_P.Gain1_Gain
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 61;
	
	  ;% FuzzyNeuro_P.one1_Value
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 62;
	
	  ;% FuzzyNeuro_P.IW211_Value
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 63;
	
	  ;% FuzzyNeuro_P.IW212_Value
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 73;
	
	  ;% FuzzyNeuro_P.b2_Value
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 83;
	
	  ;% FuzzyNeuro_P.Automatik_Value
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 85;
	
	  ;% FuzzyNeuro_P.Weight_Value
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 86;
	
	  ;% FuzzyNeuro_P.soll1_Value
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 87;
	
	  ;% FuzzyNeuro_P.Offseth1_Value
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 88;
	
	  ;% FuzzyNeuro_P.Faktorh1_Value
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 89;
	
	  ;% FuzzyNeuro_P.TP5Hz_A
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 90;
	
	  ;% FuzzyNeuro_P.TP5Hz_C
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 91;
	
	  ;% FuzzyNeuro_P.nix_Value
	  section.data(55).logicalSrcIdx = 56;
	  section.data(55).dtTransOffset = 92;
	
	  ;% FuzzyNeuro_P.Weight_Value_h
	  section.data(56).logicalSrcIdx = 57;
	  section.data(56).dtTransOffset = 193;
	
	  ;% FuzzyNeuro_P.bissle_Value
	  section.data(57).logicalSrcIdx = 58;
	  section.data(57).dtTransOffset = 194;
	
	  ;% FuzzyNeuro_P.Weight_Value_l
	  section.data(58).logicalSrcIdx = 59;
	  section.data(58).dtTransOffset = 295;
	
	  ;% FuzzyNeuro_P.ganzviel_Value
	  section.data(59).logicalSrcIdx = 60;
	  section.data(59).dtTransOffset = 296;
	
	  ;% FuzzyNeuro_P.Weight_Value_i
	  section.data(60).logicalSrcIdx = 61;
	  section.data(60).dtTransOffset = 397;
	
	  ;% FuzzyNeuro_P.soll2_Value
	  section.data(61).logicalSrcIdx = 62;
	  section.data(61).dtTransOffset = 398;
	
	  ;% FuzzyNeuro_P.Offseth2_Value
	  section.data(62).logicalSrcIdx = 63;
	  section.data(62).dtTransOffset = 399;
	
	  ;% FuzzyNeuro_P.Faktorh2_Value
	  section.data(63).logicalSrcIdx = 64;
	  section.data(63).dtTransOffset = 400;
	
	  ;% FuzzyNeuro_P.TP5Hz1_A
	  section.data(64).logicalSrcIdx = 65;
	  section.data(64).dtTransOffset = 401;
	
	  ;% FuzzyNeuro_P.TP5Hz1_C
	  section.data(65).logicalSrcIdx = 66;
	  section.data(65).dtTransOffset = 402;
	
	  ;% FuzzyNeuro_P.nix_Value_m
	  section.data(66).logicalSrcIdx = 69;
	  section.data(66).dtTransOffset = 403;
	
	  ;% FuzzyNeuro_P.Weight_Value_a
	  section.data(67).logicalSrcIdx = 70;
	  section.data(67).dtTransOffset = 504;
	
	  ;% FuzzyNeuro_P.stationaer_Value
	  section.data(68).logicalSrcIdx = 71;
	  section.data(68).dtTransOffset = 505;
	
	  ;% FuzzyNeuro_P.Weight_Value_n
	  section.data(69).logicalSrcIdx = 72;
	  section.data(69).dtTransOffset = 606;
	
	  ;% FuzzyNeuro_P.ganzviel_Value_d
	  section.data(70).logicalSrcIdx = 73;
	  section.data(70).dtTransOffset = 607;
	
	  ;% FuzzyNeuro_P.xdata_Value
	  section.data(71).logicalSrcIdx = 74;
	  section.data(71).dtTransOffset = 708;
	
	  ;% FuzzyNeuro_P.xdata_Value_e
	  section.data(72).logicalSrcIdx = 75;
	  section.data(72).dtTransOffset = 809;
	
	  ;% FuzzyNeuro_P.MidRange_Value
	  section.data(73).logicalSrcIdx = 76;
	  section.data(73).dtTransOffset = 910;
	
	  ;% FuzzyNeuro_P.viel_Value
	  section.data(74).logicalSrcIdx = 77;
	  section.data(74).dtTransOffset = 912;
	
	  ;% FuzzyNeuro_P.viel_Value_p
	  section.data(75).logicalSrcIdx = 78;
	  section.data(75).dtTransOffset = 1013;
	
	  ;% FuzzyNeuro_P.Zero_Value
	  section.data(76).logicalSrcIdx = 79;
	  section.data(76).dtTransOffset = 1114;
	
	  ;% FuzzyNeuro_P.Pumpe1_Value
	  section.data(77).logicalSrcIdx = 80;
	  section.data(77).dtTransOffset = 1115;
	
	  ;% FuzzyNeuro_P.Pumpe2_Value
	  section.data(78).logicalSrcIdx = 81;
	  section.data(78).dtTransOffset = 1116;
	
	  ;% FuzzyNeuro_P.IW211_Value_i
	  section.data(79).logicalSrcIdx = 82;
	  section.data(79).dtTransOffset = 1117;
	
	  ;% FuzzyNeuro_P.IW111_Value_d
	  section.data(80).logicalSrcIdx = 83;
	  section.data(80).dtTransOffset = 1127;
	
	  ;% FuzzyNeuro_P.Subtractminx_Bias
	  section.data(81).logicalSrcIdx = 84;
	  section.data(81).dtTransOffset = 1129;
	
	  ;% FuzzyNeuro_P.rangeyrangex_Gain
	  section.data(82).logicalSrcIdx = 85;
	  section.data(82).dtTransOffset = 1131;
	
	  ;% FuzzyNeuro_P.Addminy_Bias
	  section.data(83).logicalSrcIdx = 86;
	  section.data(83).dtTransOffset = 1133;
	
	  ;% FuzzyNeuro_P.IW112_Value_k
	  section.data(84).logicalSrcIdx = 87;
	  section.data(84).dtTransOffset = 1134;
	
	  ;% FuzzyNeuro_P.IW113_Value_o
	  section.data(85).logicalSrcIdx = 88;
	  section.data(85).dtTransOffset = 1136;
	
	  ;% FuzzyNeuro_P.IW114_Value_a
	  section.data(86).logicalSrcIdx = 89;
	  section.data(86).dtTransOffset = 1138;
	
	  ;% FuzzyNeuro_P.IW115_Value_f
	  section.data(87).logicalSrcIdx = 90;
	  section.data(87).dtTransOffset = 1140;
	
	  ;% FuzzyNeuro_P.IW116_Value_h
	  section.data(88).logicalSrcIdx = 91;
	  section.data(88).dtTransOffset = 1142;
	
	  ;% FuzzyNeuro_P.IW117_Value_d
	  section.data(89).logicalSrcIdx = 92;
	  section.data(89).dtTransOffset = 1144;
	
	  ;% FuzzyNeuro_P.IW118_Value_h
	  section.data(90).logicalSrcIdx = 93;
	  section.data(90).dtTransOffset = 1146;
	
	  ;% FuzzyNeuro_P.IW119_Value_j
	  section.data(91).logicalSrcIdx = 94;
	  section.data(91).dtTransOffset = 1148;
	
	  ;% FuzzyNeuro_P.IW1110_Value_g
	  section.data(92).logicalSrcIdx = 95;
	  section.data(92).dtTransOffset = 1150;
	
	  ;% FuzzyNeuro_P.b1_Value_o
	  section.data(93).logicalSrcIdx = 96;
	  section.data(93).dtTransOffset = 1152;
	
	  ;% FuzzyNeuro_P.Gain_Gain_e
	  section.data(94).logicalSrcIdx = 97;
	  section.data(94).dtTransOffset = 1162;
	
	  ;% FuzzyNeuro_P.one_Value_d
	  section.data(95).logicalSrcIdx = 98;
	  section.data(95).dtTransOffset = 1163;
	
	  ;% FuzzyNeuro_P.Gain1_Gain_e
	  section.data(96).logicalSrcIdx = 99;
	  section.data(96).dtTransOffset = 1164;
	
	  ;% FuzzyNeuro_P.one1_Value_b
	  section.data(97).logicalSrcIdx = 100;
	  section.data(97).dtTransOffset = 1165;
	
	  ;% FuzzyNeuro_P.IW212_Value_o
	  section.data(98).logicalSrcIdx = 101;
	  section.data(98).dtTransOffset = 1166;
	
	  ;% FuzzyNeuro_P.b2_Value_i
	  section.data(99).logicalSrcIdx = 102;
	  section.data(99).dtTransOffset = 1176;
	
	  ;% FuzzyNeuro_P.Subtractminy_Bias
	  section.data(100).logicalSrcIdx = 103;
	  section.data(100).dtTransOffset = 1178;
	
	  ;% FuzzyNeuro_P.Dividebyrangey_Gain
	  section.data(101).logicalSrcIdx = 104;
	  section.data(101).dtTransOffset = 1179;
	
	  ;% FuzzyNeuro_P.Addminx_Bias
	  section.data(102).logicalSrcIdx = 105;
	  section.data(102).dtTransOffset = 1181;
	
	  ;% FuzzyNeuro_P.IW111_Value_a
	  section.data(103).logicalSrcIdx = 106;
	  section.data(103).dtTransOffset = 1183;
	
	  ;% FuzzyNeuro_P.IW1110_Value_h
	  section.data(104).logicalSrcIdx = 107;
	  section.data(104).dtTransOffset = 1185;
	
	  ;% FuzzyNeuro_P.IW112_Value_c
	  section.data(105).logicalSrcIdx = 108;
	  section.data(105).dtTransOffset = 1187;
	
	  ;% FuzzyNeuro_P.IW113_Value_e
	  section.data(106).logicalSrcIdx = 109;
	  section.data(106).dtTransOffset = 1189;
	
	  ;% FuzzyNeuro_P.IW114_Value_p
	  section.data(107).logicalSrcIdx = 110;
	  section.data(107).dtTransOffset = 1191;
	
	  ;% FuzzyNeuro_P.IW115_Value_p
	  section.data(108).logicalSrcIdx = 111;
	  section.data(108).dtTransOffset = 1193;
	
	  ;% FuzzyNeuro_P.IW116_Value_c
	  section.data(109).logicalSrcIdx = 112;
	  section.data(109).dtTransOffset = 1195;
	
	  ;% FuzzyNeuro_P.IW117_Value_dt
	  section.data(110).logicalSrcIdx = 113;
	  section.data(110).dtTransOffset = 1197;
	
	  ;% FuzzyNeuro_P.IW118_Value_c
	  section.data(111).logicalSrcIdx = 114;
	  section.data(111).dtTransOffset = 1199;
	
	  ;% FuzzyNeuro_P.IW119_Value_o
	  section.data(112).logicalSrcIdx = 115;
	  section.data(112).dtTransOffset = 1201;
	
	  ;% FuzzyNeuro_P.Subtractminx_Bias_b
	  section.data(113).logicalSrcIdx = 116;
	  section.data(113).dtTransOffset = 1203;
	
	  ;% FuzzyNeuro_P.rangeyrangex_Gain_h
	  section.data(114).logicalSrcIdx = 117;
	  section.data(114).dtTransOffset = 1205;
	
	  ;% FuzzyNeuro_P.Addminy_Bias_c
	  section.data(115).logicalSrcIdx = 118;
	  section.data(115).dtTransOffset = 1207;
	
	  ;% FuzzyNeuro_P.b1_Value_j
	  section.data(116).logicalSrcIdx = 119;
	  section.data(116).dtTransOffset = 1208;
	
	  ;% FuzzyNeuro_P.Gain_Gain_n
	  section.data(117).logicalSrcIdx = 120;
	  section.data(117).dtTransOffset = 1218;
	
	  ;% FuzzyNeuro_P.one_Value_n
	  section.data(118).logicalSrcIdx = 121;
	  section.data(118).dtTransOffset = 1219;
	
	  ;% FuzzyNeuro_P.Gain1_Gain_c
	  section.data(119).logicalSrcIdx = 122;
	  section.data(119).dtTransOffset = 1220;
	
	  ;% FuzzyNeuro_P.one1_Value_m
	  section.data(120).logicalSrcIdx = 123;
	  section.data(120).dtTransOffset = 1221;
	
	  ;% FuzzyNeuro_P.IW211_Value_e
	  section.data(121).logicalSrcIdx = 124;
	  section.data(121).dtTransOffset = 1222;
	
	  ;% FuzzyNeuro_P.IW212_Value_l
	  section.data(122).logicalSrcIdx = 125;
	  section.data(122).dtTransOffset = 1232;
	
	  ;% FuzzyNeuro_P.b2_Value_b
	  section.data(123).logicalSrcIdx = 126;
	  section.data(123).dtTransOffset = 1242;
	
	  ;% FuzzyNeuro_P.Subtractminy_Bias_k
	  section.data(124).logicalSrcIdx = 127;
	  section.data(124).dtTransOffset = 1244;
	
	  ;% FuzzyNeuro_P.Dividebyrangey_Gain_i
	  section.data(125).logicalSrcIdx = 128;
	  section.data(125).dtTransOffset = 1245;
	
	  ;% FuzzyNeuro_P.Addminx_Bias_h
	  section.data(126).logicalSrcIdx = 129;
	  section.data(126).dtTransOffset = 1247;
	
	  ;% FuzzyNeuro_P.Constants_Value
	  section.data(127).logicalSrcIdx = 130;
	  section.data(127).dtTransOffset = 1249;
	
	  ;% FuzzyNeuro_P.IW111_Value_m
	  section.data(128).logicalSrcIdx = 131;
	  section.data(128).dtTransOffset = 1250;
	
	  ;% FuzzyNeuro_P.IW1110_Value_e
	  section.data(129).logicalSrcIdx = 132;
	  section.data(129).dtTransOffset = 1252;
	
	  ;% FuzzyNeuro_P.IW112_Value_kd
	  section.data(130).logicalSrcIdx = 133;
	  section.data(130).dtTransOffset = 1254;
	
	  ;% FuzzyNeuro_P.IW113_Value_d
	  section.data(131).logicalSrcIdx = 134;
	  section.data(131).dtTransOffset = 1256;
	
	  ;% FuzzyNeuro_P.IW114_Value_h
	  section.data(132).logicalSrcIdx = 135;
	  section.data(132).dtTransOffset = 1258;
	
	  ;% FuzzyNeuro_P.IW115_Value_a
	  section.data(133).logicalSrcIdx = 136;
	  section.data(133).dtTransOffset = 1260;
	
	  ;% FuzzyNeuro_P.IW116_Value_l
	  section.data(134).logicalSrcIdx = 137;
	  section.data(134).dtTransOffset = 1262;
	
	  ;% FuzzyNeuro_P.IW117_Value_j
	  section.data(135).logicalSrcIdx = 138;
	  section.data(135).dtTransOffset = 1264;
	
	  ;% FuzzyNeuro_P.IW118_Value_g
	  section.data(136).logicalSrcIdx = 139;
	  section.data(136).dtTransOffset = 1266;
	
	  ;% FuzzyNeuro_P.IW119_Value_p
	  section.data(137).logicalSrcIdx = 140;
	  section.data(137).dtTransOffset = 1268;
	
	  ;% FuzzyNeuro_P.Subtractminx_Bias_bn
	  section.data(138).logicalSrcIdx = 141;
	  section.data(138).dtTransOffset = 1270;
	
	  ;% FuzzyNeuro_P.rangeyrangex_Gain_f
	  section.data(139).logicalSrcIdx = 142;
	  section.data(139).dtTransOffset = 1272;
	
	  ;% FuzzyNeuro_P.Addminy_Bias_p
	  section.data(140).logicalSrcIdx = 143;
	  section.data(140).dtTransOffset = 1274;
	
	  ;% FuzzyNeuro_P.b1_Value_m
	  section.data(141).logicalSrcIdx = 144;
	  section.data(141).dtTransOffset = 1275;
	
	  ;% FuzzyNeuro_P.Gain_Gain_m
	  section.data(142).logicalSrcIdx = 145;
	  section.data(142).dtTransOffset = 1285;
	
	  ;% FuzzyNeuro_P.one_Value_j
	  section.data(143).logicalSrcIdx = 146;
	  section.data(143).dtTransOffset = 1286;
	
	  ;% FuzzyNeuro_P.Gain1_Gain_h
	  section.data(144).logicalSrcIdx = 147;
	  section.data(144).dtTransOffset = 1287;
	
	  ;% FuzzyNeuro_P.one1_Value_n
	  section.data(145).logicalSrcIdx = 148;
	  section.data(145).dtTransOffset = 1288;
	
	  ;% FuzzyNeuro_P.IW211_Value_h
	  section.data(146).logicalSrcIdx = 149;
	  section.data(146).dtTransOffset = 1289;
	
	  ;% FuzzyNeuro_P.IW212_Value_d
	  section.data(147).logicalSrcIdx = 150;
	  section.data(147).dtTransOffset = 1299;
	
	  ;% FuzzyNeuro_P.b2_Value_h
	  section.data(148).logicalSrcIdx = 151;
	  section.data(148).dtTransOffset = 1309;
	
	  ;% FuzzyNeuro_P.Subtractminy_Bias_h
	  section.data(149).logicalSrcIdx = 152;
	  section.data(149).dtTransOffset = 1311;
	
	  ;% FuzzyNeuro_P.Dividebyrangey_Gain_b
	  section.data(150).logicalSrcIdx = 153;
	  section.data(150).dtTransOffset = 1312;
	
	  ;% FuzzyNeuro_P.Addminx_Bias_b
	  section.data(151).logicalSrcIdx = 154;
	  section.data(151).dtTransOffset = 1314;
	
	  ;% FuzzyNeuro_P.Constants_Value_a
	  section.data(152).logicalSrcIdx = 155;
	  section.data(152).dtTransOffset = 1316;
	
	  ;% FuzzyNeuro_P.Constants_Value_i
	  section.data(153).logicalSrcIdx = 156;
	  section.data(153).dtTransOffset = 1317;
	
	  ;% FuzzyNeuro_P.Saturation_UpperSat
	  section.data(154).logicalSrcIdx = 157;
	  section.data(154).dtTransOffset = 1318;
	
	  ;% FuzzyNeuro_P.Saturation_LowerSat
	  section.data(155).logicalSrcIdx = 158;
	  section.data(155).dtTransOffset = 1319;
	
	  ;% FuzzyNeuro_P.Saturation1_UpperSat
	  section.data(156).logicalSrcIdx = 159;
	  section.data(156).dtTransOffset = 1320;
	
	  ;% FuzzyNeuro_P.Saturation1_LowerSat
	  section.data(157).logicalSrcIdx = 160;
	  section.data(157).dtTransOffset = 1321;
	
	  ;% FuzzyNeuro_P.V1_Value
	  section.data(158).logicalSrcIdx = 161;
	  section.data(158).dtTransOffset = 1322;
	
	  ;% FuzzyNeuro_P.V13o_Value
	  section.data(159).logicalSrcIdx = 162;
	  section.data(159).dtTransOffset = 1323;
	
	  ;% FuzzyNeuro_P.V13u_Value
	  section.data(160).logicalSrcIdx = 163;
	  section.data(160).dtTransOffset = 1324;
	
	  ;% FuzzyNeuro_P.V3_Value
	  section.data(161).logicalSrcIdx = 164;
	  section.data(161).dtTransOffset = 1325;
	
	  ;% FuzzyNeuro_P.V32o_Value
	  section.data(162).logicalSrcIdx = 165;
	  section.data(162).dtTransOffset = 1326;
	
	  ;% FuzzyNeuro_P.V32u_Value
	  section.data(163).logicalSrcIdx = 166;
	  section.data(163).dtTransOffset = 1327;
	
	  ;% FuzzyNeuro_P.V2_Value
	  section.data(164).logicalSrcIdx = 167;
	  section.data(164).dtTransOffset = 1328;
	
	  ;% FuzzyNeuro_P.V0_Value
	  section.data(165).logicalSrcIdx = 168;
	  section.data(165).dtTransOffset = 1329;
	
	  ;% FuzzyNeuro_P.Faktorh3_Value
	  section.data(166).logicalSrcIdx = 169;
	  section.data(166).dtTransOffset = 1330;
	
	  ;% FuzzyNeuro_P.Offseth3_Value
	  section.data(167).logicalSrcIdx = 170;
	  section.data(167).dtTransOffset = 1331;
	
	  ;% FuzzyNeuro_P.TP5Hz2_A
	  section.data(168).logicalSrcIdx = 171;
	  section.data(168).dtTransOffset = 1332;
	
	  ;% FuzzyNeuro_P.TP5Hz2_C
	  section.data(169).logicalSrcIdx = 172;
	  section.data(169).dtTransOffset = 1333;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_i.c_Value
	  section.data(1).logicalSrcIdx = 175;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_i.d_Value
	  section.data(2).logicalSrcIdx = 176;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_l.a_Value
	  section.data(1).logicalSrcIdx = 177;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_l.b_Value
	  section.data(2).logicalSrcIdx = 178;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_n.c_Value
	  section.data(1).logicalSrcIdx = 179;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_n.d_Value
	  section.data(2).logicalSrcIdx = 180;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_j.a_Value
	  section.data(1).logicalSrcIdx = 181;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_j.b_Value
	  section.data(2).logicalSrcIdx = 182;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem2_b.b_Value
	  section.data(1).logicalSrcIdx = 183;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem2_b.c_Value
	  section.data(2).logicalSrcIdx = 184;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_g.a_Value
	  section.data(1).logicalSrcIdx = 185;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_g.b_Value
	  section.data(2).logicalSrcIdx = 186;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_l.c_Value
	  section.data(1).logicalSrcIdx = 187;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_l.d_Value
	  section.data(2).logicalSrcIdx = 188;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_h.a_Value
	  section.data(1).logicalSrcIdx = 189;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_h.b_Value
	  section.data(2).logicalSrcIdx = 190;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3.c_Value
	  section.data(1).logicalSrcIdx = 191;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3.d_Value
	  section.data(2).logicalSrcIdx = 192;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1.a_Value
	  section.data(1).logicalSrcIdx = 193;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1.b_Value
	  section.data(2).logicalSrcIdx = 194;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem2_m.b_Value
	  section.data(1).logicalSrcIdx = 195;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem2_m.c_Value
	  section.data(2).logicalSrcIdx = 196;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_j.a_Value
	  section.data(1).logicalSrcIdx = 197;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_j.b_Value
	  section.data(2).logicalSrcIdx = 198;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(13) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 14;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (FuzzyNeuro_B)
    ;%
      section.nData     = 166;
      section.data(166)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.TmpSignalConversionAtDotProduct
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.DotProduct
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_B.DotProduct_c
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_B.DotProduct_k
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_B.DotProduct_l
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_B.DotProduct_ka
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_B.DotProduct_e
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7;
	
	  ;% FuzzyNeuro_B.DotProduct_b
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% FuzzyNeuro_B.DotProduct_p
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% FuzzyNeuro_B.DotProduct_ko
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% FuzzyNeuro_B.DotProduct_km
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% FuzzyNeuro_B.netsum
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% FuzzyNeuro_B.Gain
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 22;
	
	  ;% FuzzyNeuro_B.Exp
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 32;
	
	  ;% FuzzyNeuro_B.Sum
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 42;
	
	  ;% FuzzyNeuro_B.Reciprocal
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 52;
	
	  ;% FuzzyNeuro_B.Gain1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 62;
	
	  ;% FuzzyNeuro_B.Sum1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 72;
	
	  ;% FuzzyNeuro_B.DotProduct_h
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 82;
	
	  ;% FuzzyNeuro_B.DotProduct_m
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 83;
	
	  ;% FuzzyNeuro_B.netsum_k
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 84;
	
	  ;% FuzzyNeuro_B.i1
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 86;
	
	  ;% FuzzyNeuro_B.Product
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 87;
	
	  ;% FuzzyNeuro_B.Sum_d
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 88;
	
	  ;% FuzzyNeuro_B.Diff1
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 89;
	
	  ;% FuzzyNeuro_B.DataConv
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 90;
	
	  ;% FuzzyNeuro_B.Merge
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 91;
	
	  ;% FuzzyNeuro_B.andorMethod
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 92;
	
	  ;% FuzzyNeuro_B.Weighting
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 93;
	
	  ;% FuzzyNeuro_B.impMethod
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 94;
	
	  ;% FuzzyNeuro_B.Merge_b
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 195;
	
	  ;% FuzzyNeuro_B.andorMethod_e
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 196;
	
	  ;% FuzzyNeuro_B.Weighting_b
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 197;
	
	  ;% FuzzyNeuro_B.impMethod_n
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 198;
	
	  ;% FuzzyNeuro_B.Merge_d
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 299;
	
	  ;% FuzzyNeuro_B.andorMethod_b
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 300;
	
	  ;% FuzzyNeuro_B.Weighting_g
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 301;
	
	  ;% FuzzyNeuro_B.impMethod_k
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 302;
	
	  ;% FuzzyNeuro_B.AggMethod1
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 403;
	
	  ;% FuzzyNeuro_B.i1_g
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 504;
	
	  ;% FuzzyNeuro_B.Product1
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 505;
	
	  ;% FuzzyNeuro_B.Sum1_f
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 506;
	
	  ;% FuzzyNeuro_B.Diff2
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 507;
	
	  ;% FuzzyNeuro_B.DataConv_a
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 508;
	
	  ;% FuzzyNeuro_B.Merge_c
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 509;
	
	  ;% FuzzyNeuro_B.andorMethod_d
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 510;
	
	  ;% FuzzyNeuro_B.Weighting_a
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 511;
	
	  ;% FuzzyNeuro_B.impMethod_d
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 512;
	
	  ;% FuzzyNeuro_B.Merge_n
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 613;
	
	  ;% FuzzyNeuro_B.andorMethod_k
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 614;
	
	  ;% FuzzyNeuro_B.Weighting_bq
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 615;
	
	  ;% FuzzyNeuro_B.impMethod_e
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 616;
	
	  ;% FuzzyNeuro_B.Merge_p
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 717;
	
	  ;% FuzzyNeuro_B.andorMethod_a
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 718;
	
	  ;% FuzzyNeuro_B.Weighting_j
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 719;
	
	  ;% FuzzyNeuro_B.impMethod_b
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 720;
	
	  ;% FuzzyNeuro_B.AggMethod2
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 821;
	
	  ;% FuzzyNeuro_B.Sum1_e
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 922;
	
	  ;% FuzzyNeuro_B.Merge_l
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 923;
	
	  ;% FuzzyNeuro_B.Sum1_o
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 924;
	
	  ;% FuzzyNeuro_B.Merge_g
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 925;
	
	  ;% FuzzyNeuro_B.viel
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 926;
	
	  ;% FuzzyNeuro_B.viel_j
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 1027;
	
	  ;% FuzzyNeuro_B.Subtractminx
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 1128;
	
	  ;% FuzzyNeuro_B.rangeyrangex
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 1130;
	
	  ;% FuzzyNeuro_B.Addminy
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 1132;
	
	  ;% FuzzyNeuro_B.DotProduct_d
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 1134;
	
	  ;% FuzzyNeuro_B.DotProduct_g
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 1135;
	
	  ;% FuzzyNeuro_B.DotProduct_j
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 1136;
	
	  ;% FuzzyNeuro_B.DotProduct_my
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 1137;
	
	  ;% FuzzyNeuro_B.DotProduct_j0
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 1138;
	
	  ;% FuzzyNeuro_B.DotProduct_ho
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 1139;
	
	  ;% FuzzyNeuro_B.DotProduct_dx
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 1140;
	
	  ;% FuzzyNeuro_B.DotProduct_li
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 1141;
	
	  ;% FuzzyNeuro_B.DotProduct_kf
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 1142;
	
	  ;% FuzzyNeuro_B.DotProduct_n
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 1143;
	
	  ;% FuzzyNeuro_B.netsum_i
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 1144;
	
	  ;% FuzzyNeuro_B.Gain_o
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 1154;
	
	  ;% FuzzyNeuro_B.Exp_b
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 1164;
	
	  ;% FuzzyNeuro_B.Sum_a
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 1174;
	
	  ;% FuzzyNeuro_B.Reciprocal_p
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 1184;
	
	  ;% FuzzyNeuro_B.Gain1_i
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 1194;
	
	  ;% FuzzyNeuro_B.Sum1_d
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 1204;
	
	  ;% FuzzyNeuro_B.DotProduct_o
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 1214;
	
	  ;% FuzzyNeuro_B.DotProduct_p0
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 1215;
	
	  ;% FuzzyNeuro_B.netsum_e
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 1216;
	
	  ;% FuzzyNeuro_B.Subtractminy
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 1218;
	
	  ;% FuzzyNeuro_B.Dividebyrangey
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 1220;
	
	  ;% FuzzyNeuro_B.Addminx
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 1222;
	
	  ;% FuzzyNeuro_B.MultiportSwitch
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 1224;
	
	  ;% FuzzyNeuro_B.Subtractminx_k
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 1226;
	
	  ;% FuzzyNeuro_B.rangeyrangex_i
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 1228;
	
	  ;% FuzzyNeuro_B.Addminy_o
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 1230;
	
	  ;% FuzzyNeuro_B.DotProduct_l3
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 1232;
	
	  ;% FuzzyNeuro_B.DotProduct_pn
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 1233;
	
	  ;% FuzzyNeuro_B.DotProduct_gx
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 1234;
	
	  ;% FuzzyNeuro_B.DotProduct_cb
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 1235;
	
	  ;% FuzzyNeuro_B.DotProduct_f
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 1236;
	
	  ;% FuzzyNeuro_B.DotProduct_f4
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 1237;
	
	  ;% FuzzyNeuro_B.DotProduct_of
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 1238;
	
	  ;% FuzzyNeuro_B.DotProduct_a
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 1239;
	
	  ;% FuzzyNeuro_B.DotProduct_ol
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 1240;
	
	  ;% FuzzyNeuro_B.DotProduct_c4
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 1241;
	
	  ;% FuzzyNeuro_B.netsum_a
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 1242;
	
	  ;% FuzzyNeuro_B.Gain_g
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 1252;
	
	  ;% FuzzyNeuro_B.Exp_j
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 1262;
	
	  ;% FuzzyNeuro_B.Sum_e
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 1272;
	
	  ;% FuzzyNeuro_B.Reciprocal_a
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 1282;
	
	  ;% FuzzyNeuro_B.Gain1_p
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 1292;
	
	  ;% FuzzyNeuro_B.Sum1_d2
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 1302;
	
	  ;% FuzzyNeuro_B.DotProduct_ak
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 1312;
	
	  ;% FuzzyNeuro_B.DotProduct_al
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 1313;
	
	  ;% FuzzyNeuro_B.netsum_ka
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 1314;
	
	  ;% FuzzyNeuro_B.Subtractminy_a
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 1316;
	
	  ;% FuzzyNeuro_B.Dividebyrangey_l
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 1318;
	
	  ;% FuzzyNeuro_B.Addminx_o
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 1320;
	
	  ;% FuzzyNeuro_B.Constants
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 1322;
	
	  ;% FuzzyNeuro_B.Subtractminx_ki
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 1323;
	
	  ;% FuzzyNeuro_B.rangeyrangex_c
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 1325;
	
	  ;% FuzzyNeuro_B.Addminy_k
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 1327;
	
	  ;% FuzzyNeuro_B.DotProduct_kb
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 1329;
	
	  ;% FuzzyNeuro_B.DotProduct_ai
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 1330;
	
	  ;% FuzzyNeuro_B.DotProduct_lz
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 1331;
	
	  ;% FuzzyNeuro_B.DotProduct_dw
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 1332;
	
	  ;% FuzzyNeuro_B.DotProduct_pn1
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 1333;
	
	  ;% FuzzyNeuro_B.DotProduct_jx
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 1334;
	
	  ;% FuzzyNeuro_B.DotProduct_ee
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 1335;
	
	  ;% FuzzyNeuro_B.DotProduct_ew
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 1336;
	
	  ;% FuzzyNeuro_B.DotProduct_ge
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 1337;
	
	  ;% FuzzyNeuro_B.DotProduct_fc
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 1338;
	
	  ;% FuzzyNeuro_B.netsum_o
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 1339;
	
	  ;% FuzzyNeuro_B.Gain_m
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 1349;
	
	  ;% FuzzyNeuro_B.Exp_c
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 1359;
	
	  ;% FuzzyNeuro_B.Sum_c
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 1369;
	
	  ;% FuzzyNeuro_B.Reciprocal_g
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 1379;
	
	  ;% FuzzyNeuro_B.Gain1_h
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 1389;
	
	  ;% FuzzyNeuro_B.Sum1_p
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 1399;
	
	  ;% FuzzyNeuro_B.DotProduct_m3
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 1409;
	
	  ;% FuzzyNeuro_B.DotProduct_oi
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 1410;
	
	  ;% FuzzyNeuro_B.netsum_m
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 1411;
	
	  ;% FuzzyNeuro_B.Subtractminy_p
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 1413;
	
	  ;% FuzzyNeuro_B.Dividebyrangey_m
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 1415;
	
	  ;% FuzzyNeuro_B.Addminx_d
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 1417;
	
	  ;% FuzzyNeuro_B.Constants_n
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 1419;
	
	  ;% FuzzyNeuro_B.Constants_g
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 1420;
	
	  ;% FuzzyNeuro_B.SFunction
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 1421;
	
	  ;% FuzzyNeuro_B.SFunction_n
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 1424;
	
	  ;% FuzzyNeuro_B.SFunction_j
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 1425;
	
	  ;% FuzzyNeuro_B.uq1Vorgabe
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 1426;
	
	  ;% FuzzyNeuro_B.Saturation
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 1427;
	
	  ;% FuzzyNeuro_B.uq2Vorgabe
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 1428;
	
	  ;% FuzzyNeuro_B.Saturation1
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 1429;
	
	  ;% FuzzyNeuro_B.i1_m
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 1430;
	
	  ;% FuzzyNeuro_B.Product2
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 1431;
	
	  ;% FuzzyNeuro_B.Sum2
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 1432;
	
	  ;% FuzzyNeuro_B.q1mess
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 1433;
	
	  ;% FuzzyNeuro_B.q2mess
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 1434;
	
	  ;% FuzzyNeuro_B.TotalFiringStrength
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 1435;
	
	  ;% FuzzyNeuro_B.ZeroFiringStrength
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 1436;
	
	  ;% FuzzyNeuro_B.Switch
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 1437;
	
	  ;% FuzzyNeuro_B.ProductCOA
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 1439;
	
	  ;% FuzzyNeuro_B.Sum_dk
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 1540;
	
	  ;% FuzzyNeuro_B.AveragingCOA
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 1541;
	
	  ;% FuzzyNeuro_B.ProductCOA_n
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 1542;
	
	  ;% FuzzyNeuro_B.Sum_h
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 1643;
	
	  ;% FuzzyNeuro_B.AveragingCOA_m
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 1644;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.DataTypeConversion
	  section.data(1).logicalSrcIdx = 166;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.DataTypeConversion1
	  section.data(2).logicalSrcIdx = 167;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_B.DataTypeConversion2
	  section.data(3).logicalSrcIdx = 168;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_B.DataTypeConversion3
	  section.data(4).logicalSrcIdx = 169;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_B.DataTypeConversion4
	  section.data(5).logicalSrcIdx = 170;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_B.DataTypeConversion5
	  section.data(6).logicalSrcIdx = 171;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_B.DataTypeConversion6
	  section.data(7).logicalSrcIdx = 172;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_B.DataTypeConversion7
	  section.data(8).logicalSrcIdx = 173;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_i.dc
	  section.data(1).logicalSrcIdx = 174;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_i.dx
	  section.data(2).logicalSrcIdx = 175;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_l.xa
	  section.data(1).logicalSrcIdx = 176;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_l.ba
	  section.data(2).logicalSrcIdx = 177;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_n.dc
	  section.data(1).logicalSrcIdx = 178;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_n.dx
	  section.data(2).logicalSrcIdx = 179;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_j.xa
	  section.data(1).logicalSrcIdx = 180;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_j.ba
	  section.data(2).logicalSrcIdx = 181;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem2_b.cb
	  section.data(1).logicalSrcIdx = 182;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem2_b.cx
	  section.data(2).logicalSrcIdx = 183;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_g.xa
	  section.data(1).logicalSrcIdx = 184;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_g.ba
	  section.data(2).logicalSrcIdx = 185;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_l.dc
	  section.data(1).logicalSrcIdx = 186;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_l.dx
	  section.data(2).logicalSrcIdx = 187;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_h.xa
	  section.data(1).logicalSrcIdx = 188;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_h.ba
	  section.data(2).logicalSrcIdx = 189;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3.dc
	  section.data(1).logicalSrcIdx = 190;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3.dx
	  section.data(2).logicalSrcIdx = 191;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1.xa
	  section.data(1).logicalSrcIdx = 192;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1.ba
	  section.data(2).logicalSrcIdx = 193;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem2_m.cb
	  section.data(1).logicalSrcIdx = 194;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem2_m.cx
	  section.data(2).logicalSrcIdx = 195;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_j.xa
	  section.data(1).logicalSrcIdx = 196;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_j.ba
	  section.data(2).logicalSrcIdx = 197;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(14) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 15;
    sectIdxOffset = 14;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (FuzzyNeuro_DWork)
    ;%
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.If_ActiveSubsystem
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanBC
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_DWork.If_ActiveSubsystem_n
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_k
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanBC
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_DWork.If_ActiveSubsystem_i
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_a
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanB_k
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% FuzzyNeuro_DWork.If_ActiveSubsystem_i2
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_p
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_kk
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% FuzzyNeuro_DWork.If_ActiveSubsystem_e
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_h
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanB_o
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% FuzzyNeuro_DWork.If_ActiveSubsystem_ie
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_j
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_ke
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% FuzzyNeuro_DWork.If_ActiveSubsystem_c
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% FuzzyNeuro_DWork.ActionOne_SubsysRanBC
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% FuzzyNeuro_DWork.If_ActiveSubsystem_a
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% FuzzyNeuro_DWork.ActionOne_SubsysRanBC_i
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem1_l.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem1_j.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 25;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem2_b.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem3_g.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem1_h.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.IfActionSubsystem3_j.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.Actionu1_n.Actionu1_SubsysRanBC
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_DWork.Actionu1.Actionu1_SubsysRanBC
	  section.data(1).logicalSrcIdx = 35;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 359394734;
  targMap.checksum1 = 63942384;
  targMap.checksum2 = 1851850346;
  targMap.checksum3 = 3202020901;


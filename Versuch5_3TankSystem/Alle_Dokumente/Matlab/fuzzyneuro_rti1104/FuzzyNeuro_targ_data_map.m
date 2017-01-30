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
      section.nData     = 101;
      section.data(101)  = dumData; %prealloc
      
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
	
	  ;% FuzzyNeuro_P.Automatik_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% FuzzyNeuro_P.IW111_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% FuzzyNeuro_P.IW1110_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 32;
	
	  ;% FuzzyNeuro_P.IW112_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% FuzzyNeuro_P.IW113_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 36;
	
	  ;% FuzzyNeuro_P.IW114_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 38;
	
	  ;% FuzzyNeuro_P.IW115_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 40;
	
	  ;% FuzzyNeuro_P.IW116_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 42;
	
	  ;% FuzzyNeuro_P.IW117_Value
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 44;
	
	  ;% FuzzyNeuro_P.IW118_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 46;
	
	  ;% FuzzyNeuro_P.IW119_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 48;
	
	  ;% FuzzyNeuro_P.soll1_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 50;
	
	  ;% FuzzyNeuro_P.Offseth1_Value
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 51;
	
	  ;% FuzzyNeuro_P.Faktorh1_Value
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 52;
	
	  ;% FuzzyNeuro_P.TP5Hz_A
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 53;
	
	  ;% FuzzyNeuro_P.TP5Hz_C
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 54;
	
	  ;% FuzzyNeuro_P.soll2_Value
	  section.data(46).logicalSrcIdx = 47;
	  section.data(46).dtTransOffset = 55;
	
	  ;% FuzzyNeuro_P.Offseth2_Value
	  section.data(47).logicalSrcIdx = 48;
	  section.data(47).dtTransOffset = 56;
	
	  ;% FuzzyNeuro_P.Faktorh2_Value
	  section.data(48).logicalSrcIdx = 49;
	  section.data(48).dtTransOffset = 57;
	
	  ;% FuzzyNeuro_P.TP5Hz1_A
	  section.data(49).logicalSrcIdx = 50;
	  section.data(49).dtTransOffset = 58;
	
	  ;% FuzzyNeuro_P.TP5Hz1_C
	  section.data(50).logicalSrcIdx = 51;
	  section.data(50).dtTransOffset = 59;
	
	  ;% FuzzyNeuro_P.Subtractminx_Bias
	  section.data(51).logicalSrcIdx = 54;
	  section.data(51).dtTransOffset = 60;
	
	  ;% FuzzyNeuro_P.rangeyrangex_Gain
	  section.data(52).logicalSrcIdx = 55;
	  section.data(52).dtTransOffset = 62;
	
	  ;% FuzzyNeuro_P.Addminy_Bias
	  section.data(53).logicalSrcIdx = 56;
	  section.data(53).dtTransOffset = 64;
	
	  ;% FuzzyNeuro_P.b1_Value
	  section.data(54).logicalSrcIdx = 57;
	  section.data(54).dtTransOffset = 65;
	
	  ;% FuzzyNeuro_P.Gain_Gain
	  section.data(55).logicalSrcIdx = 58;
	  section.data(55).dtTransOffset = 75;
	
	  ;% FuzzyNeuro_P.one_Value
	  section.data(56).logicalSrcIdx = 59;
	  section.data(56).dtTransOffset = 76;
	
	  ;% FuzzyNeuro_P.Gain1_Gain
	  section.data(57).logicalSrcIdx = 60;
	  section.data(57).dtTransOffset = 77;
	
	  ;% FuzzyNeuro_P.one1_Value
	  section.data(58).logicalSrcIdx = 61;
	  section.data(58).dtTransOffset = 78;
	
	  ;% FuzzyNeuro_P.IW211_Value
	  section.data(59).logicalSrcIdx = 62;
	  section.data(59).dtTransOffset = 79;
	
	  ;% FuzzyNeuro_P.IW212_Value
	  section.data(60).logicalSrcIdx = 63;
	  section.data(60).dtTransOffset = 89;
	
	  ;% FuzzyNeuro_P.b2_Value
	  section.data(61).logicalSrcIdx = 64;
	  section.data(61).dtTransOffset = 99;
	
	  ;% FuzzyNeuro_P.Subtractminy_Bias
	  section.data(62).logicalSrcIdx = 65;
	  section.data(62).dtTransOffset = 101;
	
	  ;% FuzzyNeuro_P.Dividebyrangey_Gain
	  section.data(63).logicalSrcIdx = 66;
	  section.data(63).dtTransOffset = 102;
	
	  ;% FuzzyNeuro_P.Addminx_Bias
	  section.data(64).logicalSrcIdx = 67;
	  section.data(64).dtTransOffset = 104;
	
	  ;% FuzzyNeuro_P.Constants_Value
	  section.data(65).logicalSrcIdx = 68;
	  section.data(65).dtTransOffset = 106;
	
	  ;% FuzzyNeuro_P.Weight_Value
	  section.data(66).logicalSrcIdx = 69;
	  section.data(66).dtTransOffset = 107;
	
	  ;% FuzzyNeuro_P.nix_Value
	  section.data(67).logicalSrcIdx = 70;
	  section.data(67).dtTransOffset = 108;
	
	  ;% FuzzyNeuro_P.Weight_Value_h
	  section.data(68).logicalSrcIdx = 71;
	  section.data(68).dtTransOffset = 209;
	
	  ;% FuzzyNeuro_P.bissle_Value
	  section.data(69).logicalSrcIdx = 72;
	  section.data(69).dtTransOffset = 210;
	
	  ;% FuzzyNeuro_P.Weight_Value_l
	  section.data(70).logicalSrcIdx = 73;
	  section.data(70).dtTransOffset = 311;
	
	  ;% FuzzyNeuro_P.ganzviel_Value
	  section.data(71).logicalSrcIdx = 74;
	  section.data(71).dtTransOffset = 312;
	
	  ;% FuzzyNeuro_P.Weight_Value_i
	  section.data(72).logicalSrcIdx = 75;
	  section.data(72).dtTransOffset = 413;
	
	  ;% FuzzyNeuro_P.nix_Value_m
	  section.data(73).logicalSrcIdx = 76;
	  section.data(73).dtTransOffset = 414;
	
	  ;% FuzzyNeuro_P.Weight_Value_a
	  section.data(74).logicalSrcIdx = 77;
	  section.data(74).dtTransOffset = 515;
	
	  ;% FuzzyNeuro_P.stationaer_Value
	  section.data(75).logicalSrcIdx = 78;
	  section.data(75).dtTransOffset = 516;
	
	  ;% FuzzyNeuro_P.Weight_Value_n
	  section.data(76).logicalSrcIdx = 79;
	  section.data(76).dtTransOffset = 617;
	
	  ;% FuzzyNeuro_P.ganzviel_Value_d
	  section.data(77).logicalSrcIdx = 80;
	  section.data(77).dtTransOffset = 618;
	
	  ;% FuzzyNeuro_P.xdata_Value
	  section.data(78).logicalSrcIdx = 81;
	  section.data(78).dtTransOffset = 719;
	
	  ;% FuzzyNeuro_P.xdata_Value_e
	  section.data(79).logicalSrcIdx = 82;
	  section.data(79).dtTransOffset = 820;
	
	  ;% FuzzyNeuro_P.MidRange_Value
	  section.data(80).logicalSrcIdx = 83;
	  section.data(80).dtTransOffset = 921;
	
	  ;% FuzzyNeuro_P.viel_Value
	  section.data(81).logicalSrcIdx = 84;
	  section.data(81).dtTransOffset = 923;
	
	  ;% FuzzyNeuro_P.viel_Value_p
	  section.data(82).logicalSrcIdx = 85;
	  section.data(82).dtTransOffset = 1024;
	
	  ;% FuzzyNeuro_P.Zero_Value
	  section.data(83).logicalSrcIdx = 86;
	  section.data(83).dtTransOffset = 1125;
	
	  ;% FuzzyNeuro_P.Pumpe1_Value
	  section.data(84).logicalSrcIdx = 87;
	  section.data(84).dtTransOffset = 1126;
	
	  ;% FuzzyNeuro_P.Pumpe2_Value
	  section.data(85).logicalSrcIdx = 88;
	  section.data(85).dtTransOffset = 1127;
	
	  ;% FuzzyNeuro_P.Saturation_UpperSat
	  section.data(86).logicalSrcIdx = 89;
	  section.data(86).dtTransOffset = 1128;
	
	  ;% FuzzyNeuro_P.Saturation_LowerSat
	  section.data(87).logicalSrcIdx = 90;
	  section.data(87).dtTransOffset = 1129;
	
	  ;% FuzzyNeuro_P.Saturation1_UpperSat
	  section.data(88).logicalSrcIdx = 91;
	  section.data(88).dtTransOffset = 1130;
	
	  ;% FuzzyNeuro_P.Saturation1_LowerSat
	  section.data(89).logicalSrcIdx = 92;
	  section.data(89).dtTransOffset = 1131;
	
	  ;% FuzzyNeuro_P.V1_Value
	  section.data(90).logicalSrcIdx = 93;
	  section.data(90).dtTransOffset = 1132;
	
	  ;% FuzzyNeuro_P.V13o_Value
	  section.data(91).logicalSrcIdx = 94;
	  section.data(91).dtTransOffset = 1133;
	
	  ;% FuzzyNeuro_P.V13u_Value
	  section.data(92).logicalSrcIdx = 95;
	  section.data(92).dtTransOffset = 1134;
	
	  ;% FuzzyNeuro_P.V3_Value
	  section.data(93).logicalSrcIdx = 96;
	  section.data(93).dtTransOffset = 1135;
	
	  ;% FuzzyNeuro_P.V32o_Value
	  section.data(94).logicalSrcIdx = 97;
	  section.data(94).dtTransOffset = 1136;
	
	  ;% FuzzyNeuro_P.V32u_Value
	  section.data(95).logicalSrcIdx = 98;
	  section.data(95).dtTransOffset = 1137;
	
	  ;% FuzzyNeuro_P.V2_Value
	  section.data(96).logicalSrcIdx = 99;
	  section.data(96).dtTransOffset = 1138;
	
	  ;% FuzzyNeuro_P.V0_Value
	  section.data(97).logicalSrcIdx = 100;
	  section.data(97).dtTransOffset = 1139;
	
	  ;% FuzzyNeuro_P.Faktorh3_Value
	  section.data(98).logicalSrcIdx = 101;
	  section.data(98).dtTransOffset = 1140;
	
	  ;% FuzzyNeuro_P.Offseth3_Value
	  section.data(99).logicalSrcIdx = 102;
	  section.data(99).dtTransOffset = 1141;
	
	  ;% FuzzyNeuro_P.TP5Hz2_A
	  section.data(100).logicalSrcIdx = 103;
	  section.data(100).dtTransOffset = 1142;
	
	  ;% FuzzyNeuro_P.TP5Hz2_C
	  section.data(101).logicalSrcIdx = 104;
	  section.data(101).dtTransOffset = 1143;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_i.c_Value
	  section.data(1).logicalSrcIdx = 107;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_i.d_Value
	  section.data(2).logicalSrcIdx = 108;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_l.a_Value
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_l.b_Value
	  section.data(2).logicalSrcIdx = 110;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_n.c_Value
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_n.d_Value
	  section.data(2).logicalSrcIdx = 112;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_j.a_Value
	  section.data(1).logicalSrcIdx = 113;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_j.b_Value
	  section.data(2).logicalSrcIdx = 114;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem2_b.b_Value
	  section.data(1).logicalSrcIdx = 115;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem2_b.c_Value
	  section.data(2).logicalSrcIdx = 116;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_g.a_Value
	  section.data(1).logicalSrcIdx = 117;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_g.b_Value
	  section.data(2).logicalSrcIdx = 118;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_l.c_Value
	  section.data(1).logicalSrcIdx = 119;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_l.d_Value
	  section.data(2).logicalSrcIdx = 120;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_h.a_Value
	  section.data(1).logicalSrcIdx = 121;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_h.b_Value
	  section.data(2).logicalSrcIdx = 122;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3.c_Value
	  section.data(1).logicalSrcIdx = 123;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3.d_Value
	  section.data(2).logicalSrcIdx = 124;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1.a_Value
	  section.data(1).logicalSrcIdx = 125;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1.b_Value
	  section.data(2).logicalSrcIdx = 126;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem2_m.b_Value
	  section.data(1).logicalSrcIdx = 127;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem2_m.c_Value
	  section.data(2).logicalSrcIdx = 128;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_j.a_Value
	  section.data(1).logicalSrcIdx = 129;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_j.b_Value
	  section.data(2).logicalSrcIdx = 130;
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
      section.nData     = 91;
      section.data(91)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.i1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.Product
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_B.Sum
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_B.Diff1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_B.i1_g
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_B.Product1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_B.Sum1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_B.Diff2
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% FuzzyNeuro_B.Subtractminx
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% FuzzyNeuro_B.rangeyrangex
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% FuzzyNeuro_B.Addminy
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% FuzzyNeuro_B.DotProduct
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 14;
	
	  ;% FuzzyNeuro_B.DotProduct_j
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 15;
	
	  ;% FuzzyNeuro_B.DotProduct_a
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 16;
	
	  ;% FuzzyNeuro_B.DotProduct_d
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% FuzzyNeuro_B.DotProduct_p
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 18;
	
	  ;% FuzzyNeuro_B.DotProduct_b
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 19;
	
	  ;% FuzzyNeuro_B.DotProduct_ds
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 20;
	
	  ;% FuzzyNeuro_B.DotProduct_g
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 21;
	
	  ;% FuzzyNeuro_B.DotProduct_l
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% FuzzyNeuro_B.DotProduct_av
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 23;
	
	  ;% FuzzyNeuro_B.netsum
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 24;
	
	  ;% FuzzyNeuro_B.Gain
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 34;
	
	  ;% FuzzyNeuro_B.Exp
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 44;
	
	  ;% FuzzyNeuro_B.Sum_d
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 54;
	
	  ;% FuzzyNeuro_B.Reciprocal
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 64;
	
	  ;% FuzzyNeuro_B.Gain1
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 74;
	
	  ;% FuzzyNeuro_B.Sum1_o
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 84;
	
	  ;% FuzzyNeuro_B.DotProduct_i
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 94;
	
	  ;% FuzzyNeuro_B.DotProduct_m
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 95;
	
	  ;% FuzzyNeuro_B.netsum_i
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 96;
	
	  ;% FuzzyNeuro_B.Subtractminy
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 98;
	
	  ;% FuzzyNeuro_B.Dividebyrangey
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 100;
	
	  ;% FuzzyNeuro_B.Addminx
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 102;
	
	  ;% FuzzyNeuro_B.Constants
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 104;
	
	  ;% FuzzyNeuro_B.DataConv
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 105;
	
	  ;% FuzzyNeuro_B.Merge
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 106;
	
	  ;% FuzzyNeuro_B.andorMethod
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 107;
	
	  ;% FuzzyNeuro_B.Weighting
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 108;
	
	  ;% FuzzyNeuro_B.impMethod
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 109;
	
	  ;% FuzzyNeuro_B.Merge_b
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 210;
	
	  ;% FuzzyNeuro_B.andorMethod_e
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 211;
	
	  ;% FuzzyNeuro_B.Weighting_b
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 212;
	
	  ;% FuzzyNeuro_B.impMethod_n
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 213;
	
	  ;% FuzzyNeuro_B.Merge_d
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 314;
	
	  ;% FuzzyNeuro_B.andorMethod_b
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 315;
	
	  ;% FuzzyNeuro_B.Weighting_g
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 316;
	
	  ;% FuzzyNeuro_B.impMethod_k
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 317;
	
	  ;% FuzzyNeuro_B.AggMethod1
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 418;
	
	  ;% FuzzyNeuro_B.DataConv_a
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 519;
	
	  ;% FuzzyNeuro_B.Merge_c
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 520;
	
	  ;% FuzzyNeuro_B.andorMethod_d
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 521;
	
	  ;% FuzzyNeuro_B.Weighting_a
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 522;
	
	  ;% FuzzyNeuro_B.impMethod_d
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 523;
	
	  ;% FuzzyNeuro_B.Merge_n
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 624;
	
	  ;% FuzzyNeuro_B.andorMethod_k
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 625;
	
	  ;% FuzzyNeuro_B.Weighting_bq
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 626;
	
	  ;% FuzzyNeuro_B.impMethod_e
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 627;
	
	  ;% FuzzyNeuro_B.Merge_p
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 728;
	
	  ;% FuzzyNeuro_B.andorMethod_a
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 729;
	
	  ;% FuzzyNeuro_B.Weighting_j
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 730;
	
	  ;% FuzzyNeuro_B.impMethod_b
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 731;
	
	  ;% FuzzyNeuro_B.AggMethod2
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 832;
	
	  ;% FuzzyNeuro_B.Sum1_e
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 933;
	
	  ;% FuzzyNeuro_B.Merge_l
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 934;
	
	  ;% FuzzyNeuro_B.Sum1_or
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 935;
	
	  ;% FuzzyNeuro_B.Merge_g
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 936;
	
	  ;% FuzzyNeuro_B.viel
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 937;
	
	  ;% FuzzyNeuro_B.viel_j
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 1038;
	
	  ;% FuzzyNeuro_B.MultiportSwitch
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 1139;
	
	  ;% FuzzyNeuro_B.SFunction
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 1141;
	
	  ;% FuzzyNeuro_B.SFunction_n
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 1144;
	
	  ;% FuzzyNeuro_B.SFunction_j
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 1145;
	
	  ;% FuzzyNeuro_B.uq1Vorgabe
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 1146;
	
	  ;% FuzzyNeuro_B.Saturation
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 1147;
	
	  ;% FuzzyNeuro_B.uq2Vorgabe
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 1148;
	
	  ;% FuzzyNeuro_B.Saturation1
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 1149;
	
	  ;% FuzzyNeuro_B.i1_m
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 1150;
	
	  ;% FuzzyNeuro_B.Product2
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 1151;
	
	  ;% FuzzyNeuro_B.Sum2
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 1152;
	
	  ;% FuzzyNeuro_B.q1mess
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 1153;
	
	  ;% FuzzyNeuro_B.q2mess
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 1154;
	
	  ;% FuzzyNeuro_B.TotalFiringStrength
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 1155;
	
	  ;% FuzzyNeuro_B.ZeroFiringStrength
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 1156;
	
	  ;% FuzzyNeuro_B.Switch
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 1157;
	
	  ;% FuzzyNeuro_B.ProductCOA
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 1159;
	
	  ;% FuzzyNeuro_B.Sum_dk
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 1260;
	
	  ;% FuzzyNeuro_B.AveragingCOA
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 1261;
	
	  ;% FuzzyNeuro_B.ProductCOA_n
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 1262;
	
	  ;% FuzzyNeuro_B.Sum_h
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 1363;
	
	  ;% FuzzyNeuro_B.AveragingCOA_m
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 1364;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.DataTypeConversion
	  section.data(1).logicalSrcIdx = 91;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.DataTypeConversion1
	  section.data(2).logicalSrcIdx = 92;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_B.DataTypeConversion2
	  section.data(3).logicalSrcIdx = 93;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_B.DataTypeConversion3
	  section.data(4).logicalSrcIdx = 94;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_B.DataTypeConversion4
	  section.data(5).logicalSrcIdx = 95;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_B.DataTypeConversion5
	  section.data(6).logicalSrcIdx = 96;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_B.DataTypeConversion6
	  section.data(7).logicalSrcIdx = 97;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_B.DataTypeConversion7
	  section.data(8).logicalSrcIdx = 98;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_i.dc
	  section.data(1).logicalSrcIdx = 99;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_i.dx
	  section.data(2).logicalSrcIdx = 100;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_l.xa
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_l.ba
	  section.data(2).logicalSrcIdx = 102;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_n.dc
	  section.data(1).logicalSrcIdx = 103;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_n.dx
	  section.data(2).logicalSrcIdx = 104;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_j.xa
	  section.data(1).logicalSrcIdx = 105;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_j.ba
	  section.data(2).logicalSrcIdx = 106;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem2_b.cb
	  section.data(1).logicalSrcIdx = 107;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem2_b.cx
	  section.data(2).logicalSrcIdx = 108;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_g.xa
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_g.ba
	  section.data(2).logicalSrcIdx = 110;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_l.dc
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_l.dx
	  section.data(2).logicalSrcIdx = 112;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_h.xa
	  section.data(1).logicalSrcIdx = 113;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_h.ba
	  section.data(2).logicalSrcIdx = 114;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3.dc
	  section.data(1).logicalSrcIdx = 115;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3.dx
	  section.data(2).logicalSrcIdx = 116;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1.xa
	  section.data(1).logicalSrcIdx = 117;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1.ba
	  section.data(2).logicalSrcIdx = 118;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem2_m.cb
	  section.data(1).logicalSrcIdx = 119;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem2_m.cx
	  section.data(2).logicalSrcIdx = 120;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_j.xa
	  section.data(1).logicalSrcIdx = 121;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_j.ba
	  section.data(2).logicalSrcIdx = 122;
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


  targMap.checksum0 = 78696832;
  targMap.checksum1 = 3345638671;
  targMap.checksum2 = 3296353144;
  targMap.checksum3 = 2236205390;


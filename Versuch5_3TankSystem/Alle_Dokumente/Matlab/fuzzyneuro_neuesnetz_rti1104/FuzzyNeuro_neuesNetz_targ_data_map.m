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
    ;% Auto data (FuzzyNeuro_neuesNetz_P)
    ;%
      section.nData     = 94;
      section.data(94)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.Switch_Threshold
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_neuesNetz_P.One_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_c
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_neuesNetz_P.One_Value_c
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_a
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_ak
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_e
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_n
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_h
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_b
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_p
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_l
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_a
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_i
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_em
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_ai
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_k
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_l5
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_i
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_k
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_ib
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_f
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_i5
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_o
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_o
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% FuzzyNeuro_neuesNetz_P.Out1_Y0_ia
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% FuzzyNeuro_neuesNetz_P._Value_n
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% FuzzyNeuro_neuesNetz_P.Automatik_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% FuzzyNeuro_neuesNetz_P.Weight_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% FuzzyNeuro_neuesNetz_P.soll1_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% FuzzyNeuro_neuesNetz_P.Offseth1_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% FuzzyNeuro_neuesNetz_P.Faktorh1_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% FuzzyNeuro_neuesNetz_P.TP5Hz_A
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% FuzzyNeuro_neuesNetz_P.TP5Hz_C
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% FuzzyNeuro_neuesNetz_P.nix_Value
	  section.data(37).logicalSrcIdx = 38;
	  section.data(37).dtTransOffset = 36;
	
	  ;% FuzzyNeuro_neuesNetz_P.Weight_Value_n
	  section.data(38).logicalSrcIdx = 39;
	  section.data(38).dtTransOffset = 137;
	
	  ;% FuzzyNeuro_neuesNetz_P.bissle_Value
	  section.data(39).logicalSrcIdx = 40;
	  section.data(39).dtTransOffset = 138;
	
	  ;% FuzzyNeuro_neuesNetz_P.Weight_Value_j
	  section.data(40).logicalSrcIdx = 41;
	  section.data(40).dtTransOffset = 239;
	
	  ;% FuzzyNeuro_neuesNetz_P.ganzviel_Value
	  section.data(41).logicalSrcIdx = 42;
	  section.data(41).dtTransOffset = 240;
	
	  ;% FuzzyNeuro_neuesNetz_P.Weight_Value_i
	  section.data(42).logicalSrcIdx = 43;
	  section.data(42).dtTransOffset = 341;
	
	  ;% FuzzyNeuro_neuesNetz_P.soll2_Value
	  section.data(43).logicalSrcIdx = 44;
	  section.data(43).dtTransOffset = 342;
	
	  ;% FuzzyNeuro_neuesNetz_P.Offseth2_Value
	  section.data(44).logicalSrcIdx = 45;
	  section.data(44).dtTransOffset = 343;
	
	  ;% FuzzyNeuro_neuesNetz_P.Faktorh2_Value
	  section.data(45).logicalSrcIdx = 46;
	  section.data(45).dtTransOffset = 344;
	
	  ;% FuzzyNeuro_neuesNetz_P.TP5Hz1_A
	  section.data(46).logicalSrcIdx = 47;
	  section.data(46).dtTransOffset = 345;
	
	  ;% FuzzyNeuro_neuesNetz_P.TP5Hz1_C
	  section.data(47).logicalSrcIdx = 48;
	  section.data(47).dtTransOffset = 346;
	
	  ;% FuzzyNeuro_neuesNetz_P.nix_Value_b
	  section.data(48).logicalSrcIdx = 51;
	  section.data(48).dtTransOffset = 347;
	
	  ;% FuzzyNeuro_neuesNetz_P.Weight_Value_b
	  section.data(49).logicalSrcIdx = 52;
	  section.data(49).dtTransOffset = 448;
	
	  ;% FuzzyNeuro_neuesNetz_P.stationaer_Value
	  section.data(50).logicalSrcIdx = 53;
	  section.data(50).dtTransOffset = 449;
	
	  ;% FuzzyNeuro_neuesNetz_P.Weight_Value_jv
	  section.data(51).logicalSrcIdx = 54;
	  section.data(51).dtTransOffset = 550;
	
	  ;% FuzzyNeuro_neuesNetz_P.ganzviel_Value_g
	  section.data(52).logicalSrcIdx = 55;
	  section.data(52).dtTransOffset = 551;
	
	  ;% FuzzyNeuro_neuesNetz_P.xdata_Value
	  section.data(53).logicalSrcIdx = 56;
	  section.data(53).dtTransOffset = 652;
	
	  ;% FuzzyNeuro_neuesNetz_P.xdata_Value_p
	  section.data(54).logicalSrcIdx = 57;
	  section.data(54).dtTransOffset = 753;
	
	  ;% FuzzyNeuro_neuesNetz_P.MidRange_Value
	  section.data(55).logicalSrcIdx = 58;
	  section.data(55).dtTransOffset = 854;
	
	  ;% FuzzyNeuro_neuesNetz_P.viel_Value
	  section.data(56).logicalSrcIdx = 59;
	  section.data(56).dtTransOffset = 856;
	
	  ;% FuzzyNeuro_neuesNetz_P.viel_Value_p
	  section.data(57).logicalSrcIdx = 60;
	  section.data(57).dtTransOffset = 957;
	
	  ;% FuzzyNeuro_neuesNetz_P.Zero_Value
	  section.data(58).logicalSrcIdx = 61;
	  section.data(58).dtTransOffset = 1058;
	
	  ;% FuzzyNeuro_neuesNetz_P.Pumpe1_Value
	  section.data(59).logicalSrcIdx = 62;
	  section.data(59).dtTransOffset = 1059;
	
	  ;% FuzzyNeuro_neuesNetz_P.Pumpe2_Value
	  section.data(60).logicalSrcIdx = 63;
	  section.data(60).dtTransOffset = 1060;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW211_Value
	  section.data(61).logicalSrcIdx = 64;
	  section.data(61).dtTransOffset = 1061;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW111_Value
	  section.data(62).logicalSrcIdx = 65;
	  section.data(62).dtTransOffset = 1071;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW112_Value
	  section.data(63).logicalSrcIdx = 66;
	  section.data(63).dtTransOffset = 1073;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW113_Value
	  section.data(64).logicalSrcIdx = 67;
	  section.data(64).dtTransOffset = 1075;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW114_Value
	  section.data(65).logicalSrcIdx = 68;
	  section.data(65).dtTransOffset = 1077;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW115_Value
	  section.data(66).logicalSrcIdx = 69;
	  section.data(66).dtTransOffset = 1079;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW116_Value
	  section.data(67).logicalSrcIdx = 70;
	  section.data(67).dtTransOffset = 1081;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW117_Value
	  section.data(68).logicalSrcIdx = 71;
	  section.data(68).dtTransOffset = 1083;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW118_Value
	  section.data(69).logicalSrcIdx = 72;
	  section.data(69).dtTransOffset = 1085;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW119_Value
	  section.data(70).logicalSrcIdx = 73;
	  section.data(70).dtTransOffset = 1087;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW1110_Value
	  section.data(71).logicalSrcIdx = 74;
	  section.data(71).dtTransOffset = 1089;
	
	  ;% FuzzyNeuro_neuesNetz_P.b1_Value
	  section.data(72).logicalSrcIdx = 75;
	  section.data(72).dtTransOffset = 1091;
	
	  ;% FuzzyNeuro_neuesNetz_P.Gain_Gain
	  section.data(73).logicalSrcIdx = 76;
	  section.data(73).dtTransOffset = 1101;
	
	  ;% FuzzyNeuro_neuesNetz_P.one_Value
	  section.data(74).logicalSrcIdx = 77;
	  section.data(74).dtTransOffset = 1102;
	
	  ;% FuzzyNeuro_neuesNetz_P.Gain1_Gain
	  section.data(75).logicalSrcIdx = 78;
	  section.data(75).dtTransOffset = 1103;
	
	  ;% FuzzyNeuro_neuesNetz_P.one1_Value
	  section.data(76).logicalSrcIdx = 79;
	  section.data(76).dtTransOffset = 1104;
	
	  ;% FuzzyNeuro_neuesNetz_P.IW212_Value
	  section.data(77).logicalSrcIdx = 80;
	  section.data(77).dtTransOffset = 1105;
	
	  ;% FuzzyNeuro_neuesNetz_P.b2_Value
	  section.data(78).logicalSrcIdx = 81;
	  section.data(78).dtTransOffset = 1115;
	
	  ;% FuzzyNeuro_neuesNetz_P.Saturation_UpperSat
	  section.data(79).logicalSrcIdx = 82;
	  section.data(79).dtTransOffset = 1117;
	
	  ;% FuzzyNeuro_neuesNetz_P.Saturation_LowerSat
	  section.data(80).logicalSrcIdx = 83;
	  section.data(80).dtTransOffset = 1118;
	
	  ;% FuzzyNeuro_neuesNetz_P.Saturation1_UpperSat
	  section.data(81).logicalSrcIdx = 84;
	  section.data(81).dtTransOffset = 1119;
	
	  ;% FuzzyNeuro_neuesNetz_P.Saturation1_LowerSat
	  section.data(82).logicalSrcIdx = 85;
	  section.data(82).dtTransOffset = 1120;
	
	  ;% FuzzyNeuro_neuesNetz_P.V1_Value
	  section.data(83).logicalSrcIdx = 86;
	  section.data(83).dtTransOffset = 1121;
	
	  ;% FuzzyNeuro_neuesNetz_P.V13o_Value
	  section.data(84).logicalSrcIdx = 87;
	  section.data(84).dtTransOffset = 1122;
	
	  ;% FuzzyNeuro_neuesNetz_P.V13u_Value
	  section.data(85).logicalSrcIdx = 88;
	  section.data(85).dtTransOffset = 1123;
	
	  ;% FuzzyNeuro_neuesNetz_P.V3_Value
	  section.data(86).logicalSrcIdx = 89;
	  section.data(86).dtTransOffset = 1124;
	
	  ;% FuzzyNeuro_neuesNetz_P.V32o_Value
	  section.data(87).logicalSrcIdx = 90;
	  section.data(87).dtTransOffset = 1125;
	
	  ;% FuzzyNeuro_neuesNetz_P.V32u_Value
	  section.data(88).logicalSrcIdx = 91;
	  section.data(88).dtTransOffset = 1126;
	
	  ;% FuzzyNeuro_neuesNetz_P.V2_Value
	  section.data(89).logicalSrcIdx = 92;
	  section.data(89).dtTransOffset = 1127;
	
	  ;% FuzzyNeuro_neuesNetz_P.V0_Value
	  section.data(90).logicalSrcIdx = 93;
	  section.data(90).dtTransOffset = 1128;
	
	  ;% FuzzyNeuro_neuesNetz_P.Faktorh3_Value
	  section.data(91).logicalSrcIdx = 94;
	  section.data(91).dtTransOffset = 1129;
	
	  ;% FuzzyNeuro_neuesNetz_P.Offseth3_Value
	  section.data(92).logicalSrcIdx = 95;
	  section.data(92).dtTransOffset = 1130;
	
	  ;% FuzzyNeuro_neuesNetz_P.TP5Hz2_A
	  section.data(93).logicalSrcIdx = 96;
	  section.data(93).dtTransOffset = 1131;
	
	  ;% FuzzyNeuro_neuesNetz_P.TP5Hz2_C
	  section.data(94).logicalSrcIdx = 97;
	  section.data(94).dtTransOffset = 1132;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_n.c_Value
	  section.data(1).logicalSrcIdx = 100;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_n.d_Value
	  section.data(2).logicalSrcIdx = 101;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_dr.a_Value
	  section.data(1).logicalSrcIdx = 102;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_dr.b_Value
	  section.data(2).logicalSrcIdx = 103;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_b.c_Value
	  section.data(1).logicalSrcIdx = 104;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_b.d_Value
	  section.data(2).logicalSrcIdx = 105;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_d.a_Value
	  section.data(1).logicalSrcIdx = 106;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_d.b_Value
	  section.data(2).logicalSrcIdx = 107;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_au.b_Value
	  section.data(1).logicalSrcIdx = 108;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_au.c_Value
	  section.data(2).logicalSrcIdx = 109;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_l.a_Value
	  section.data(1).logicalSrcIdx = 110;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_l.b_Value
	  section.data(2).logicalSrcIdx = 111;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_c.c_Value
	  section.data(1).logicalSrcIdx = 112;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_c.d_Value
	  section.data(2).logicalSrcIdx = 113;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_p.a_Value
	  section.data(1).logicalSrcIdx = 114;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_p.b_Value
	  section.data(2).logicalSrcIdx = 115;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3.c_Value
	  section.data(1).logicalSrcIdx = 116;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3.d_Value
	  section.data(2).logicalSrcIdx = 117;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem1.a_Value
	  section.data(1).logicalSrcIdx = 118;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem1.b_Value
	  section.data(2).logicalSrcIdx = 119;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_k.b_Value
	  section.data(1).logicalSrcIdx = 120;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_k.c_Value
	  section.data(2).logicalSrcIdx = 121;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_p.a_Value
	  section.data(1).logicalSrcIdx = 122;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_p.b_Value
	  section.data(2).logicalSrcIdx = 123;
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
    ;% Auto data (FuzzyNeuro_neuesNetz_B)
    ;%
      section.nData     = 85;
      section.data(85)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.i1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.Product
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_neuesNetz_B.Diff1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataConv
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_neuesNetz_B.Merge
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_neuesNetz_B.andorMethod
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_neuesNetz_B.Weighting
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% FuzzyNeuro_neuesNetz_B.impMethod
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% FuzzyNeuro_neuesNetz_B.Merge_c
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 109;
	
	  ;% FuzzyNeuro_neuesNetz_B.andorMethod_p
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 110;
	
	  ;% FuzzyNeuro_neuesNetz_B.Weighting_e
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 111;
	
	  ;% FuzzyNeuro_neuesNetz_B.impMethod_e
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 112;
	
	  ;% FuzzyNeuro_neuesNetz_B.Merge_g
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 213;
	
	  ;% FuzzyNeuro_neuesNetz_B.andorMethod_e
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 214;
	
	  ;% FuzzyNeuro_neuesNetz_B.Weighting_f
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 215;
	
	  ;% FuzzyNeuro_neuesNetz_B.impMethod_k
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 216;
	
	  ;% FuzzyNeuro_neuesNetz_B.AggMethod1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 317;
	
	  ;% FuzzyNeuro_neuesNetz_B.i1_n
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 418;
	
	  ;% FuzzyNeuro_neuesNetz_B.Product1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 419;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum1
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 420;
	
	  ;% FuzzyNeuro_neuesNetz_B.Diff2
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 421;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataConv_n
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 422;
	
	  ;% FuzzyNeuro_neuesNetz_B.Merge_gx
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 423;
	
	  ;% FuzzyNeuro_neuesNetz_B.andorMethod_l
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 424;
	
	  ;% FuzzyNeuro_neuesNetz_B.Weighting_i
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 425;
	
	  ;% FuzzyNeuro_neuesNetz_B.impMethod_d
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 426;
	
	  ;% FuzzyNeuro_neuesNetz_B.Merge_j
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 527;
	
	  ;% FuzzyNeuro_neuesNetz_B.andorMethod_b
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 528;
	
	  ;% FuzzyNeuro_neuesNetz_B.Weighting_j
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 529;
	
	  ;% FuzzyNeuro_neuesNetz_B.impMethod_h
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 530;
	
	  ;% FuzzyNeuro_neuesNetz_B.Merge_m
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 631;
	
	  ;% FuzzyNeuro_neuesNetz_B.andorMethod_i
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 632;
	
	  ;% FuzzyNeuro_neuesNetz_B.Weighting_es
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 633;
	
	  ;% FuzzyNeuro_neuesNetz_B.impMethod_d5
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 634;
	
	  ;% FuzzyNeuro_neuesNetz_B.AggMethod2
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 735;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum1_b
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 836;
	
	  ;% FuzzyNeuro_neuesNetz_B.Merge_b
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 837;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum1_j
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 838;
	
	  ;% FuzzyNeuro_neuesNetz_B.Merge_p
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 839;
	
	  ;% FuzzyNeuro_neuesNetz_B.viel
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 840;
	
	  ;% FuzzyNeuro_neuesNetz_B.viel_i
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 941;
	
	  ;% FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 1042;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 1044;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_j
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 1045;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_d
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 1046;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_m
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 1047;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_c
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 1048;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_d5
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 1049;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_k
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 1050;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_j1
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 1051;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_g
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 1052;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_a
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 1053;
	
	  ;% FuzzyNeuro_neuesNetz_B.netsum
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 1054;
	
	  ;% FuzzyNeuro_neuesNetz_B.Gain
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 1064;
	
	  ;% FuzzyNeuro_neuesNetz_B.Exp
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 1074;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum_m
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 1084;
	
	  ;% FuzzyNeuro_neuesNetz_B.Reciprocal
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 1094;
	
	  ;% FuzzyNeuro_neuesNetz_B.Gain1
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 1104;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum1_i
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 1114;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_h
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 1124;
	
	  ;% FuzzyNeuro_neuesNetz_B.DotProduct_al
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 1125;
	
	  ;% FuzzyNeuro_neuesNetz_B.netsum_a
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 1126;
	
	  ;% FuzzyNeuro_neuesNetz_B.MultiportSwitch
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 1128;
	
	  ;% FuzzyNeuro_neuesNetz_B.SFunction
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 1130;
	
	  ;% FuzzyNeuro_neuesNetz_B.SFunction_o
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 1133;
	
	  ;% FuzzyNeuro_neuesNetz_B.SFunction_o3
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 1134;
	
	  ;% FuzzyNeuro_neuesNetz_B.uq1Vorgabe
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 1135;
	
	  ;% FuzzyNeuro_neuesNetz_B.Saturation
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 1136;
	
	  ;% FuzzyNeuro_neuesNetz_B.uq2Vorgabe
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 1137;
	
	  ;% FuzzyNeuro_neuesNetz_B.Saturation1
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 1138;
	
	  ;% FuzzyNeuro_neuesNetz_B.i1_e
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 1139;
	
	  ;% FuzzyNeuro_neuesNetz_B.Product2
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 1140;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum2
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 1141;
	
	  ;% FuzzyNeuro_neuesNetz_B.q1mess
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 1142;
	
	  ;% FuzzyNeuro_neuesNetz_B.q2mess
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 1143;
	
	  ;% FuzzyNeuro_neuesNetz_B.TotalFiringStrength
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 1144;
	
	  ;% FuzzyNeuro_neuesNetz_B.ZeroFiringStrength
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 1145;
	
	  ;% FuzzyNeuro_neuesNetz_B.Switch
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 1146;
	
	  ;% FuzzyNeuro_neuesNetz_B.ProductCOA
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 1148;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum_p
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 1249;
	
	  ;% FuzzyNeuro_neuesNetz_B.AveragingCOA
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 1250;
	
	  ;% FuzzyNeuro_neuesNetz_B.ProductCOA_e
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 1251;
	
	  ;% FuzzyNeuro_neuesNetz_B.Sum_a
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 1352;
	
	  ;% FuzzyNeuro_neuesNetz_B.AveragingCOA_k
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 1353;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.DataTypeConversion
	  section.data(1).logicalSrcIdx = 85;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataTypeConversion1
	  section.data(2).logicalSrcIdx = 86;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataTypeConversion2
	  section.data(3).logicalSrcIdx = 87;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataTypeConversion3
	  section.data(4).logicalSrcIdx = 88;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataTypeConversion4
	  section.data(5).logicalSrcIdx = 89;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataTypeConversion5
	  section.data(6).logicalSrcIdx = 90;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataTypeConversion6
	  section.data(7).logicalSrcIdx = 91;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_neuesNetz_B.DataTypeConversion7
	  section.data(8).logicalSrcIdx = 92;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_n.dc
	  section.data(1).logicalSrcIdx = 93;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_n.dx
	  section.data(2).logicalSrcIdx = 94;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_dr.xa
	  section.data(1).logicalSrcIdx = 95;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_dr.ba
	  section.data(2).logicalSrcIdx = 96;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_b.dc
	  section.data(1).logicalSrcIdx = 97;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_b.dx
	  section.data(2).logicalSrcIdx = 98;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_d.xa
	  section.data(1).logicalSrcIdx = 99;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_d.ba
	  section.data(2).logicalSrcIdx = 100;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_au.cb
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_au.cx
	  section.data(2).logicalSrcIdx = 102;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_l.xa
	  section.data(1).logicalSrcIdx = 103;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_l.ba
	  section.data(2).logicalSrcIdx = 104;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_c.dc
	  section.data(1).logicalSrcIdx = 105;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_c.dx
	  section.data(2).logicalSrcIdx = 106;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_p.xa
	  section.data(1).logicalSrcIdx = 107;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_p.ba
	  section.data(2).logicalSrcIdx = 108;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3.dc
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3.dx
	  section.data(2).logicalSrcIdx = 110;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem1.xa
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem1.ba
	  section.data(2).logicalSrcIdx = 112;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_k.cb
	  section.data(1).logicalSrcIdx = 113;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_k.cx
	  section.data(2).logicalSrcIdx = 114;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_p.xa
	  section.data(1).logicalSrcIdx = 115;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_p.ba
	  section.data(2).logicalSrcIdx = 116;
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
    ;% Auto data (FuzzyNeuro_neuesNetz_DWork)
    ;%
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanBC
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_m
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_j
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_SubsysRanBC
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_p
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_n
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_f
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_j
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_p
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_p
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_g
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_g
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_SubsysRanB_j
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_h
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_e
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_k
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_jg
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.ActionOne_SubsysRanBC
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_ja
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% FuzzyNeuro_neuesNetz_DWork.ActionOne_SubsysRanBC_m
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_dr.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_d.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 25;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_au.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_p.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.Actionu1_h.Actionu1_SubsysRanBC
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_neuesNetz_DWork.Actionu1.Actionu1_SubsysRanBC
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


  targMap.checksum0 = 3953648730;
  targMap.checksum1 = 1296009695;
  targMap.checksum2 = 4066704538;
  targMap.checksum3 = 770576726;


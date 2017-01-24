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
      section.nData     = 76;
      section.data(76)  = dumData; %prealloc
      
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
	
	  ;% FuzzyNeuro_P.Weight_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% FuzzyNeuro_P.soll1_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% FuzzyNeuro_P.Offseth1_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% FuzzyNeuro_P.Faktorh1_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% FuzzyNeuro_P.TP5Hz_A
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% FuzzyNeuro_P.TP5Hz_C
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% FuzzyNeuro_P.nix_Value
	  section.data(37).logicalSrcIdx = 38;
	  section.data(37).dtTransOffset = 36;
	
	  ;% FuzzyNeuro_P.Weight_Value_h
	  section.data(38).logicalSrcIdx = 39;
	  section.data(38).dtTransOffset = 137;
	
	  ;% FuzzyNeuro_P.bissle_Value
	  section.data(39).logicalSrcIdx = 40;
	  section.data(39).dtTransOffset = 138;
	
	  ;% FuzzyNeuro_P.Weight_Value_l
	  section.data(40).logicalSrcIdx = 41;
	  section.data(40).dtTransOffset = 239;
	
	  ;% FuzzyNeuro_P.ganzviel_Value
	  section.data(41).logicalSrcIdx = 42;
	  section.data(41).dtTransOffset = 240;
	
	  ;% FuzzyNeuro_P.Weight_Value_i
	  section.data(42).logicalSrcIdx = 43;
	  section.data(42).dtTransOffset = 341;
	
	  ;% FuzzyNeuro_P.soll2_Value
	  section.data(43).logicalSrcIdx = 44;
	  section.data(43).dtTransOffset = 342;
	
	  ;% FuzzyNeuro_P.Offseth2_Value
	  section.data(44).logicalSrcIdx = 45;
	  section.data(44).dtTransOffset = 343;
	
	  ;% FuzzyNeuro_P.Faktorh2_Value
	  section.data(45).logicalSrcIdx = 46;
	  section.data(45).dtTransOffset = 344;
	
	  ;% FuzzyNeuro_P.TP5Hz1_A
	  section.data(46).logicalSrcIdx = 47;
	  section.data(46).dtTransOffset = 345;
	
	  ;% FuzzyNeuro_P.TP5Hz1_C
	  section.data(47).logicalSrcIdx = 48;
	  section.data(47).dtTransOffset = 346;
	
	  ;% FuzzyNeuro_P.nix_Value_m
	  section.data(48).logicalSrcIdx = 51;
	  section.data(48).dtTransOffset = 347;
	
	  ;% FuzzyNeuro_P.Weight_Value_a
	  section.data(49).logicalSrcIdx = 52;
	  section.data(49).dtTransOffset = 448;
	
	  ;% FuzzyNeuro_P.stationaer_Value
	  section.data(50).logicalSrcIdx = 53;
	  section.data(50).dtTransOffset = 449;
	
	  ;% FuzzyNeuro_P.Weight_Value_n
	  section.data(51).logicalSrcIdx = 54;
	  section.data(51).dtTransOffset = 550;
	
	  ;% FuzzyNeuro_P.ganzviel_Value_d
	  section.data(52).logicalSrcIdx = 55;
	  section.data(52).dtTransOffset = 551;
	
	  ;% FuzzyNeuro_P.xdata_Value
	  section.data(53).logicalSrcIdx = 56;
	  section.data(53).dtTransOffset = 652;
	
	  ;% FuzzyNeuro_P.xdata_Value_e
	  section.data(54).logicalSrcIdx = 57;
	  section.data(54).dtTransOffset = 753;
	
	  ;% FuzzyNeuro_P.MidRange_Value
	  section.data(55).logicalSrcIdx = 58;
	  section.data(55).dtTransOffset = 854;
	
	  ;% FuzzyNeuro_P.viel_Value
	  section.data(56).logicalSrcIdx = 59;
	  section.data(56).dtTransOffset = 856;
	
	  ;% FuzzyNeuro_P.viel_Value_p
	  section.data(57).logicalSrcIdx = 60;
	  section.data(57).dtTransOffset = 957;
	
	  ;% FuzzyNeuro_P.Zero_Value
	  section.data(58).logicalSrcIdx = 61;
	  section.data(58).dtTransOffset = 1058;
	
	  ;% FuzzyNeuro_P.Pumpe1_Value
	  section.data(59).logicalSrcIdx = 62;
	  section.data(59).dtTransOffset = 1059;
	
	  ;% FuzzyNeuro_P.Pumpe2_Value
	  section.data(60).logicalSrcIdx = 63;
	  section.data(60).dtTransOffset = 1060;
	
	  ;% FuzzyNeuro_P.Saturation_UpperSat
	  section.data(61).logicalSrcIdx = 64;
	  section.data(61).dtTransOffset = 1061;
	
	  ;% FuzzyNeuro_P.Saturation_LowerSat
	  section.data(62).logicalSrcIdx = 65;
	  section.data(62).dtTransOffset = 1062;
	
	  ;% FuzzyNeuro_P.Saturation1_UpperSat
	  section.data(63).logicalSrcIdx = 66;
	  section.data(63).dtTransOffset = 1063;
	
	  ;% FuzzyNeuro_P.Saturation1_LowerSat
	  section.data(64).logicalSrcIdx = 67;
	  section.data(64).dtTransOffset = 1064;
	
	  ;% FuzzyNeuro_P.V1_Value
	  section.data(65).logicalSrcIdx = 68;
	  section.data(65).dtTransOffset = 1065;
	
	  ;% FuzzyNeuro_P.V13o_Value
	  section.data(66).logicalSrcIdx = 69;
	  section.data(66).dtTransOffset = 1066;
	
	  ;% FuzzyNeuro_P.V13u_Value
	  section.data(67).logicalSrcIdx = 70;
	  section.data(67).dtTransOffset = 1067;
	
	  ;% FuzzyNeuro_P.V3_Value
	  section.data(68).logicalSrcIdx = 71;
	  section.data(68).dtTransOffset = 1068;
	
	  ;% FuzzyNeuro_P.V32o_Value
	  section.data(69).logicalSrcIdx = 72;
	  section.data(69).dtTransOffset = 1069;
	
	  ;% FuzzyNeuro_P.V32u_Value
	  section.data(70).logicalSrcIdx = 73;
	  section.data(70).dtTransOffset = 1070;
	
	  ;% FuzzyNeuro_P.V2_Value
	  section.data(71).logicalSrcIdx = 74;
	  section.data(71).dtTransOffset = 1071;
	
	  ;% FuzzyNeuro_P.V0_Value
	  section.data(72).logicalSrcIdx = 75;
	  section.data(72).dtTransOffset = 1072;
	
	  ;% FuzzyNeuro_P.Faktorh3_Value
	  section.data(73).logicalSrcIdx = 76;
	  section.data(73).dtTransOffset = 1073;
	
	  ;% FuzzyNeuro_P.Offseth3_Value
	  section.data(74).logicalSrcIdx = 77;
	  section.data(74).dtTransOffset = 1074;
	
	  ;% FuzzyNeuro_P.TP5Hz2_A
	  section.data(75).logicalSrcIdx = 78;
	  section.data(75).dtTransOffset = 1075;
	
	  ;% FuzzyNeuro_P.TP5Hz2_C
	  section.data(76).logicalSrcIdx = 79;
	  section.data(76).dtTransOffset = 1076;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_i.c_Value
	  section.data(1).logicalSrcIdx = 82;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_i.d_Value
	  section.data(2).logicalSrcIdx = 83;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_l.a_Value
	  section.data(1).logicalSrcIdx = 84;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_l.b_Value
	  section.data(2).logicalSrcIdx = 85;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_n.c_Value
	  section.data(1).logicalSrcIdx = 86;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_n.d_Value
	  section.data(2).logicalSrcIdx = 87;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_j.a_Value
	  section.data(1).logicalSrcIdx = 88;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_j.b_Value
	  section.data(2).logicalSrcIdx = 89;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem2_b.b_Value
	  section.data(1).logicalSrcIdx = 90;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem2_b.c_Value
	  section.data(2).logicalSrcIdx = 91;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_g.a_Value
	  section.data(1).logicalSrcIdx = 92;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_g.b_Value
	  section.data(2).logicalSrcIdx = 93;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_l.c_Value
	  section.data(1).logicalSrcIdx = 94;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_l.d_Value
	  section.data(2).logicalSrcIdx = 95;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1_h.a_Value
	  section.data(1).logicalSrcIdx = 96;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1_h.b_Value
	  section.data(2).logicalSrcIdx = 97;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3.c_Value
	  section.data(1).logicalSrcIdx = 98;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3.d_Value
	  section.data(2).logicalSrcIdx = 99;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem1.a_Value
	  section.data(1).logicalSrcIdx = 100;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem1.b_Value
	  section.data(2).logicalSrcIdx = 101;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem2_m.b_Value
	  section.data(1).logicalSrcIdx = 102;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem2_m.c_Value
	  section.data(2).logicalSrcIdx = 103;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_P.IfActionSubsystem3_j.a_Value
	  section.data(1).logicalSrcIdx = 104;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_P.IfActionSubsystem3_j.b_Value
	  section.data(2).logicalSrcIdx = 105;
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
      section.nData     = 64;
      section.data(64)  = dumData; %prealloc
      
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
	
	  ;% FuzzyNeuro_B.DataConv
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_B.Merge
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_B.andorMethod
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_B.Weighting
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% FuzzyNeuro_B.impMethod
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% FuzzyNeuro_B.Merge_b
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 109;
	
	  ;% FuzzyNeuro_B.andorMethod_e
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 110;
	
	  ;% FuzzyNeuro_B.Weighting_b
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 111;
	
	  ;% FuzzyNeuro_B.impMethod_n
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 112;
	
	  ;% FuzzyNeuro_B.Merge_d
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 213;
	
	  ;% FuzzyNeuro_B.andorMethod_b
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 214;
	
	  ;% FuzzyNeuro_B.Weighting_g
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 215;
	
	  ;% FuzzyNeuro_B.impMethod_k
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 216;
	
	  ;% FuzzyNeuro_B.AggMethod1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 317;
	
	  ;% FuzzyNeuro_B.i1_g
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 418;
	
	  ;% FuzzyNeuro_B.Product1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 419;
	
	  ;% FuzzyNeuro_B.Sum1
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 420;
	
	  ;% FuzzyNeuro_B.Diff2
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 421;
	
	  ;% FuzzyNeuro_B.DataConv_a
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 422;
	
	  ;% FuzzyNeuro_B.Merge_c
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 423;
	
	  ;% FuzzyNeuro_B.andorMethod_d
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 424;
	
	  ;% FuzzyNeuro_B.Weighting_a
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 425;
	
	  ;% FuzzyNeuro_B.impMethod_d
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 426;
	
	  ;% FuzzyNeuro_B.Merge_n
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 527;
	
	  ;% FuzzyNeuro_B.andorMethod_k
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 528;
	
	  ;% FuzzyNeuro_B.Weighting_bq
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 529;
	
	  ;% FuzzyNeuro_B.impMethod_e
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 530;
	
	  ;% FuzzyNeuro_B.Merge_p
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 631;
	
	  ;% FuzzyNeuro_B.andorMethod_a
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 632;
	
	  ;% FuzzyNeuro_B.Weighting_j
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 633;
	
	  ;% FuzzyNeuro_B.impMethod_b
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 634;
	
	  ;% FuzzyNeuro_B.AggMethod2
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 735;
	
	  ;% FuzzyNeuro_B.Sum1_e
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 836;
	
	  ;% FuzzyNeuro_B.Merge_l
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 837;
	
	  ;% FuzzyNeuro_B.Sum1_o
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 838;
	
	  ;% FuzzyNeuro_B.Merge_g
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 839;
	
	  ;% FuzzyNeuro_B.viel
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 840;
	
	  ;% FuzzyNeuro_B.viel_j
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 941;
	
	  ;% FuzzyNeuro_B.MultiportSwitch
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 1042;
	
	  ;% FuzzyNeuro_B.SFunction
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 1044;
	
	  ;% FuzzyNeuro_B.SFunction_j
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 1047;
	
	  ;% FuzzyNeuro_B.SFunction_j2
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 1048;
	
	  ;% FuzzyNeuro_B.uq1Vorgabe
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 1049;
	
	  ;% FuzzyNeuro_B.Saturation
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 1050;
	
	  ;% FuzzyNeuro_B.uq2Vorgabe
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 1051;
	
	  ;% FuzzyNeuro_B.Saturation1
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 1052;
	
	  ;% FuzzyNeuro_B.i1_m
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 1053;
	
	  ;% FuzzyNeuro_B.Product2
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 1054;
	
	  ;% FuzzyNeuro_B.Sum2
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 1055;
	
	  ;% FuzzyNeuro_B.q1mess
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 1056;
	
	  ;% FuzzyNeuro_B.q2mess
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 1057;
	
	  ;% FuzzyNeuro_B.TotalFiringStrength
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 1058;
	
	  ;% FuzzyNeuro_B.ZeroFiringStrength
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 1059;
	
	  ;% FuzzyNeuro_B.Switch
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 1060;
	
	  ;% FuzzyNeuro_B.ProductCOA
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 1062;
	
	  ;% FuzzyNeuro_B.Sum_d
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 1163;
	
	  ;% FuzzyNeuro_B.AveragingCOA
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 1164;
	
	  ;% FuzzyNeuro_B.ProductCOA_n
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 1165;
	
	  ;% FuzzyNeuro_B.Sum_h
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 1266;
	
	  ;% FuzzyNeuro_B.AveragingCOA_m
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 1267;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.DataTypeConversion
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.DataTypeConversion1
	  section.data(2).logicalSrcIdx = 65;
	  section.data(2).dtTransOffset = 1;
	
	  ;% FuzzyNeuro_B.DataTypeConversion2
	  section.data(3).logicalSrcIdx = 66;
	  section.data(3).dtTransOffset = 2;
	
	  ;% FuzzyNeuro_B.DataTypeConversion3
	  section.data(4).logicalSrcIdx = 67;
	  section.data(4).dtTransOffset = 3;
	
	  ;% FuzzyNeuro_B.DataTypeConversion4
	  section.data(5).logicalSrcIdx = 68;
	  section.data(5).dtTransOffset = 4;
	
	  ;% FuzzyNeuro_B.DataTypeConversion5
	  section.data(6).logicalSrcIdx = 69;
	  section.data(6).dtTransOffset = 5;
	
	  ;% FuzzyNeuro_B.DataTypeConversion6
	  section.data(7).logicalSrcIdx = 70;
	  section.data(7).dtTransOffset = 6;
	
	  ;% FuzzyNeuro_B.DataTypeConversion7
	  section.data(8).logicalSrcIdx = 71;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_i.dc
	  section.data(1).logicalSrcIdx = 72;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_i.dx
	  section.data(2).logicalSrcIdx = 73;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_l.xa
	  section.data(1).logicalSrcIdx = 74;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_l.ba
	  section.data(2).logicalSrcIdx = 75;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_n.dc
	  section.data(1).logicalSrcIdx = 76;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_n.dx
	  section.data(2).logicalSrcIdx = 77;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_j.xa
	  section.data(1).logicalSrcIdx = 78;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_j.ba
	  section.data(2).logicalSrcIdx = 79;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem2_b.cb
	  section.data(1).logicalSrcIdx = 80;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem2_b.cx
	  section.data(2).logicalSrcIdx = 81;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_g.xa
	  section.data(1).logicalSrcIdx = 82;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_g.ba
	  section.data(2).logicalSrcIdx = 83;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_l.dc
	  section.data(1).logicalSrcIdx = 84;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_l.dx
	  section.data(2).logicalSrcIdx = 85;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1_h.xa
	  section.data(1).logicalSrcIdx = 86;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1_h.ba
	  section.data(2).logicalSrcIdx = 87;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3.dc
	  section.data(1).logicalSrcIdx = 88;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3.dx
	  section.data(2).logicalSrcIdx = 89;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem1.xa
	  section.data(1).logicalSrcIdx = 90;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem1.ba
	  section.data(2).logicalSrcIdx = 91;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem2_m.cb
	  section.data(1).logicalSrcIdx = 92;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem2_m.cx
	  section.data(2).logicalSrcIdx = 93;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% FuzzyNeuro_B.IfActionSubsystem3_j.xa
	  section.data(1).logicalSrcIdx = 94;
	  section.data(1).dtTransOffset = 0;
	
	  ;% FuzzyNeuro_B.IfActionSubsystem3_j.ba
	  section.data(2).logicalSrcIdx = 95;
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


  targMap.checksum0 = 1513453435;
  targMap.checksum1 = 4278060393;
  targMap.checksum2 = 1118506515;
  targMap.checksum3 = 1901709821;


    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
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
        ;% Auto data (rtP)
        ;%
            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtP.DiscretePIDController_D
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.DiscretePIDController_I
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.DiscretePIDController_InitialConditionForFilter
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.DiscretePIDController_InitialConditionForIntegrator
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.DiscretePIDController_LowerIntegratorSaturationLimit
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.DiscretePIDController_LowerSaturationLimit
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.DiscretePIDController_N
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.RepeatingSequenceInterpolated2_OutValues
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.DiscretePIDController_P
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 15;

                    ;% rtP.RepeatingSequenceInterpolated2_TimeValues
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 16;

                    ;% rtP.DiscretePIDController_UpperIntegratorSaturationLimit
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 24;

                    ;% rtP.DiscretePIDController_UpperSaturationLimit
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 25;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.WrapToZero_Threshold
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 68;
            section.data(68)  = dumData; %prealloc

                    ;% rtP.Constant_Value
                    section.data(1).logicalSrcIdx = 13;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(2).logicalSrcIdx = 14;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(3).logicalSrcIdx = 15;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Gain_Gain
                    section.data(4).logicalSrcIdx = 16;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(5).logicalSrcIdx = 17;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Integrator_gainval
                    section.data(6).logicalSrcIdx = 18;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Filter_gainval
                    section.data(7).logicalSrcIdx = 19;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Saturation_UpperSat
                    section.data(8).logicalSrcIdx = 20;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Saturation_LowerSat
                    section.data(9).logicalSrcIdx = 21;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Constant3_Value
                    section.data(10).logicalSrcIdx = 22;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Constant2_Value
                    section.data(11).logicalSrcIdx = 23;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.uib1_Gain
                    section.data(12).logicalSrcIdx = 24;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.convertsintoms_Gain
                    section.data(13).logicalSrcIdx = 25;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.coeff_aerorCwA2_Gain
                    section.data(14).logicalSrcIdx = 26;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.TFr_wheel_Gain
                    section.data(15).logicalSrcIdx = 27;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.loadtorque_Gain
                    section.data(16).logicalSrcIdx = 28;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.UnitDelay_InitialCondition_k3ms2yvusv
                    section.data(17).logicalSrcIdx = 29;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.Gain6_Gain
                    section.data(18).logicalSrcIdx = 30;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Gain7_Gain
                    section.data(19).logicalSrcIdx = 31;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Gain8_Gain
                    section.data(20).logicalSrcIdx = 32;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Gain9_Gain
                    section.data(21).logicalSrcIdx = 33;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Gain10_Gain
                    section.data(22).logicalSrcIdx = 34;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Gain11_Gain
                    section.data(23).logicalSrcIdx = 35;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Saturation_UpperSat_i0xk5bf3au
                    section.data(24).logicalSrcIdx = 36;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Saturation_LowerSat_ds3qzssna2
                    section.data(25).logicalSrcIdx = 37;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.Integrator_IC
                    section.data(26).logicalSrcIdx = 38;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Integrator1_IC
                    section.data(27).logicalSrcIdx = 39;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.onlynegative_UpperSat
                    section.data(28).logicalSrcIdx = 40;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.onlynegative_LowerSat
                    section.data(29).logicalSrcIdx = 41;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.onlypositive_UpperSat
                    section.data(30).logicalSrcIdx = 42;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.onlypositive_LowerSat
                    section.data(31).logicalSrcIdx = 43;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.DiscreteTimeIntegrator_gainval_ironaljz5i
                    section.data(32).logicalSrcIdx = 44;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.DiscreteTimeIntegrator_IC_p0emdu1vo0
                    section.data(33).logicalSrcIdx = 45;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.convertsintorads_Gain
                    section.data(34).logicalSrcIdx = 46;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.SampleTimeMath_WtEt
                    section.data(35).logicalSrcIdx = 47;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.rpm2pu_Gain
                    section.data(36).logicalSrcIdx = 48;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.Gain2_Gain
                    section.data(37).logicalSrcIdx = 49;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.polepairs_Gain
                    section.data(38).logicalSrcIdx = 50;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.convertsintoms_Gain_fiqpesw42p
                    section.data(39).logicalSrcIdx = 51;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.Multiply_Gain
                    section.data(40).logicalSrcIdx = 52;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.Integrator_IC_enr3uyn1pn
                    section.data(41).logicalSrcIdx = 53;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.Integrator1_IC_iytltsacmf
                    section.data(42).logicalSrcIdx = 54;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.Multiply_Gain_mmgzpqegcd
                    section.data(43).logicalSrcIdx = 55;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.onlynegative_UpperSat_n10o4huijb
                    section.data(44).logicalSrcIdx = 56;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.onlynegative_LowerSat_fmq51hroac
                    section.data(45).logicalSrcIdx = 57;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.onlypositive_UpperSat_miyd3oypjf
                    section.data(46).logicalSrcIdx = 58;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.onlypositive_LowerSat_fr1olx4dcr
                    section.data(47).logicalSrcIdx = 59;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.RTP_DBEA2577_vc_Value
                    section.data(48).logicalSrcIdx = 60;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.Constant_Value_oq05l1rpow
                    section.data(49).logicalSrcIdx = 61;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.Constant1_Value
                    section.data(50).logicalSrcIdx = 62;
                    section.data(50).dtTransOffset = 54;

                    ;% rtP.Constant2_Value_p0oprvq4dx
                    section.data(51).logicalSrcIdx = 63;
                    section.data(51).dtTransOffset = 60;

                    ;% rtP.Constant4_Value
                    section.data(52).logicalSrcIdx = 64;
                    section.data(52).dtTransOffset = 66;

                    ;% rtP.Constant5_Value
                    section.data(53).logicalSrcIdx = 65;
                    section.data(53).dtTransOffset = 72;

                    ;% rtP.Constant6_Value
                    section.data(54).logicalSrcIdx = 66;
                    section.data(54).dtTransOffset = 78;

                    ;% rtP.Rolling_friction_Value
                    section.data(55).logicalSrcIdx = 67;
                    section.data(55).dtTransOffset = 84;

                    ;% rtP.Constant12_Value
                    section.data(56).logicalSrcIdx = 68;
                    section.data(56).dtTransOffset = 85;

                    ;% rtP.Constant13_Value
                    section.data(57).logicalSrcIdx = 69;
                    section.data(57).dtTransOffset = 86;

                    ;% rtP.Constant14_Value
                    section.data(58).logicalSrcIdx = 70;
                    section.data(58).dtTransOffset = 87;

                    ;% rtP.Constant15_Value
                    section.data(59).logicalSrcIdx = 71;
                    section.data(59).dtTransOffset = 88;

                    ;% rtP.Constant16_Value
                    section.data(60).logicalSrcIdx = 72;
                    section.data(60).dtTransOffset = 89;

                    ;% rtP.Constant17_Value
                    section.data(61).logicalSrcIdx = 73;
                    section.data(61).dtTransOffset = 90;

                    ;% rtP.Constant18_Value
                    section.data(62).logicalSrcIdx = 74;
                    section.data(62).dtTransOffset = 91;

                    ;% rtP.Constant19_Value
                    section.data(63).logicalSrcIdx = 75;
                    section.data(63).dtTransOffset = 92;

                    ;% rtP.Constant20_Value
                    section.data(64).logicalSrcIdx = 76;
                    section.data(64).dtTransOffset = 93;

                    ;% rtP.Constant21_Value
                    section.data(65).logicalSrcIdx = 77;
                    section.data(65).dtTransOffset = 94;

                    ;% rtP.Constant22_Value
                    section.data(66).logicalSrcIdx = 78;
                    section.data(66).dtTransOffset = 95;

                    ;% rtP.Constant23_Value
                    section.data(67).logicalSrcIdx = 79;
                    section.data(67).dtTransOffset = 96;

                    ;% rtP.Constant3_Value_ja55kf1ii0
                    section.data(68).logicalSrcIdx = 80;
                    section.data(68).dtTransOffset = 97;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.Output_InitialCondition
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.FixPtConstant_Value
                    section.data(2).logicalSrcIdx = 82;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Constant_Value_h50w2jt11b
                    section.data(3).logicalSrcIdx = 83;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
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
        nTotSects     = 5;
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
        ;% Auto data (rtB)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.jhdkhjxll0
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.mb2uqnl0dc
                    section.data(1).logicalSrcIdx = 55;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 82;
            section.data(82)  = dumData; %prealloc

                    ;% rtB.boxlro0v4w
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.dhj2kqscw2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.kuelqyv3wb
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.edxvioyzlc
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.crw5li1kzs
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.ez4vimsggj
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.lsgonhap4q
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.ccdpg2e51c
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.et2gzftmfl
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.hmsv5lubrs
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.k0h0smmumn
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.e32tu1k5dy
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.mv2egnitku
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.i230d00p4f
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.kyvlw1eg1j
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.myvwt33bkt
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.l1gsa3trsh
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.oepjxvzqvl
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.lrnvfgtgd0
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.d4qoidu0ry
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtB.dquprl145n
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtB.bvmbcuedts
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtB.alvydcpetd
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 25;

                    ;% rtB.igqbtwb1cb
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 29;

                    ;% rtB.ntau2arxhc
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 30;

                    ;% rtB.k1rj25ivdk
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 31;

                    ;% rtB.mklcfmrns4
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 32;

                    ;% rtB.cjhohfslts
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 33;

                    ;% rtB.aoj0xh52vh
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 34;

                    ;% rtB.k1eonvu0jk
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 35;

                    ;% rtB.k5fkctjwt3
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 39;

                    ;% rtB.ndvl0vsmvk
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 40;

                    ;% rtB.cngejipk01
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 41;

                    ;% rtB.e4ir2xx5wg
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 42;

                    ;% rtB.lidvtlakg4
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 43;

                    ;% rtB.lut33f4odj
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 44;

                    ;% rtB.k0jkfliw3f
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 45;

                    ;% rtB.bqudhrxhmu
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 46;

                    ;% rtB.mgtbco3ykj
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 47;

                    ;% rtB.ltac0jcdqm
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 48;

                    ;% rtB.e5xs1fgp0p
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 49;

                    ;% rtB.p5xsnshbs2
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 50;

                    ;% rtB.howt2qok0i
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 51;

                    ;% rtB.jjm52urekq
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 52;

                    ;% rtB.ldg3ehsse5
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 53;

                    ;% rtB.kn3hi4jtzs
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 54;

                    ;% rtB.jkk4cu5kch
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 55;

                    ;% rtB.fx4wpmz5u0
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 61;

                    ;% rtB.by1nqwksec
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 65;

                    ;% rtB.hazdzaaae3
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 69;

                    ;% rtB.j2a44cvuzt
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 73;

                    ;% rtB.lrl4sovswi
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 77;

                    ;% rtB.llsv3ekyqe
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 81;

                    ;% rtB.pftutvvgoa
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 85;

                    ;% rtB.mdhsmk0z5v
                    section.data(55).logicalSrcIdx = 56;
                    section.data(55).dtTransOffset = 86;

                    ;% rtB.fylncoh0hg
                    section.data(56).logicalSrcIdx = 57;
                    section.data(56).dtTransOffset = 87;

                    ;% rtB.la0lywfzq3
                    section.data(57).logicalSrcIdx = 58;
                    section.data(57).dtTransOffset = 88;

                    ;% rtB.n5buikirfg
                    section.data(58).logicalSrcIdx = 59;
                    section.data(58).dtTransOffset = 89;

                    ;% rtB.ohmkvyyvno
                    section.data(59).logicalSrcIdx = 60;
                    section.data(59).dtTransOffset = 90;

                    ;% rtB.kahmn5kkv5
                    section.data(60).logicalSrcIdx = 61;
                    section.data(60).dtTransOffset = 91;

                    ;% rtB.o1wvh1f3fj
                    section.data(61).logicalSrcIdx = 62;
                    section.data(61).dtTransOffset = 92;

                    ;% rtB.ffh3vaqhha
                    section.data(62).logicalSrcIdx = 63;
                    section.data(62).dtTransOffset = 93;

                    ;% rtB.fxrcnp5bjm
                    section.data(63).logicalSrcIdx = 64;
                    section.data(63).dtTransOffset = 94;

                    ;% rtB.awkvkk5zk5
                    section.data(64).logicalSrcIdx = 65;
                    section.data(64).dtTransOffset = 95;

                    ;% rtB.fmrmomooue
                    section.data(65).logicalSrcIdx = 66;
                    section.data(65).dtTransOffset = 96;

                    ;% rtB.llbtqnhtpl
                    section.data(66).logicalSrcIdx = 67;
                    section.data(66).dtTransOffset = 97;

                    ;% rtB.nj4juwhgqw
                    section.data(67).logicalSrcIdx = 68;
                    section.data(67).dtTransOffset = 98;

                    ;% rtB.eyqv0xj1ug
                    section.data(68).logicalSrcIdx = 69;
                    section.data(68).dtTransOffset = 99;

                    ;% rtB.ieawd2cbze
                    section.data(69).logicalSrcIdx = 70;
                    section.data(69).dtTransOffset = 100;

                    ;% rtB.di3f3nhukn
                    section.data(70).logicalSrcIdx = 71;
                    section.data(70).dtTransOffset = 101;

                    ;% rtB.ou3ioysjfo
                    section.data(71).logicalSrcIdx = 72;
                    section.data(71).dtTransOffset = 102;

                    ;% rtB.jvh2ohto52
                    section.data(72).logicalSrcIdx = 73;
                    section.data(72).dtTransOffset = 103;

                    ;% rtB.pdykrtncmz
                    section.data(73).logicalSrcIdx = 74;
                    section.data(73).dtTransOffset = 104;

                    ;% rtB.fax5qeeyc1
                    section.data(74).logicalSrcIdx = 75;
                    section.data(74).dtTransOffset = 105;

                    ;% rtB.loux1l3u5w
                    section.data(75).logicalSrcIdx = 76;
                    section.data(75).dtTransOffset = 106;

                    ;% rtB.ncb1snsfz2
                    section.data(76).logicalSrcIdx = 77;
                    section.data(76).dtTransOffset = 107;

                    ;% rtB.nhvdwogyzu
                    section.data(77).logicalSrcIdx = 78;
                    section.data(77).dtTransOffset = 108;

                    ;% rtB.kz5tpkq11l
                    section.data(78).logicalSrcIdx = 79;
                    section.data(78).dtTransOffset = 109;

                    ;% rtB.a41vzzxren
                    section.data(79).logicalSrcIdx = 80;
                    section.data(79).dtTransOffset = 110;

                    ;% rtB.eud0zgm0r5
                    section.data(80).logicalSrcIdx = 81;
                    section.data(80).dtTransOffset = 111;

                    ;% rtB.do4skprury
                    section.data(81).logicalSrcIdx = 82;
                    section.data(81).dtTransOffset = 112;

                    ;% rtB.ouvlgrsc5y
                    section.data(82).logicalSrcIdx = 83;
                    section.data(82).dtTransOffset = 113;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.fwe1oukzth
                    section.data(1).logicalSrcIdx = 84;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.fj0htoh5tj
                    section.data(2).logicalSrcIdx = 85;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ncvg3pf1ks
                    section.data(3).logicalSrcIdx = 86;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtB.j5vnwqxvus
                    section.data(1).logicalSrcIdx = 87;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.az1w2epyt0
                    section.data(2).logicalSrcIdx = 88;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.lbwft3qm51
                    section.data(3).logicalSrcIdx = 89;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.dnqdrumv1i
                    section.data(4).logicalSrcIdx = 90;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.cri2ighsbt
                    section.data(5).logicalSrcIdx = 91;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.dehruik5oa
                    section.data(6).logicalSrcIdx = 92;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.dhojtt4r2r
                    section.data(7).logicalSrcIdx = 93;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.ny0skh2lmi
                    section.data(8).logicalSrcIdx = 94;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.cprrfu52rw
                    section.data(9).logicalSrcIdx = 95;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.fqj12khujg
                    section.data(10).logicalSrcIdx = 96;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.m4jno1bkib
                    section.data(11).logicalSrcIdx = 97;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.pwxvkz4cs3
                    section.data(12).logicalSrcIdx = 98;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.f5vvbgw04z
                    section.data(13).logicalSrcIdx = 99;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.mur22rltjv
                    section.data(14).logicalSrcIdx = 100;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.pg44xwiojj
                    section.data(15).logicalSrcIdx = 101;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.g3q3b4gkk1
                    section.data(16).logicalSrcIdx = 102;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.bov2zzmsnh
                    section.data(17).logicalSrcIdx = 103;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.ioaefphlhe
                    section.data(18).logicalSrcIdx = 104;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.obpxpmwwxu
                    section.data(19).logicalSrcIdx = 105;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.oo1b0vvxiu
                    section.data(20).logicalSrcIdx = 106;
                    section.data(20).dtTransOffset = 19;

                    ;% rtB.nf5mwr2amm
                    section.data(21).logicalSrcIdx = 107;
                    section.data(21).dtTransOffset = 20;

                    ;% rtB.ajs0qdm2js
                    section.data(22).logicalSrcIdx = 108;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
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
        nTotSects     = 6;
        sectIdxOffset = 5;

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
        ;% Auto data (rtDW)
        ;%
            section.nData     = 25;
            section.data(25)  = dumData; %prealloc

                    ;% rtDW.c1b5pzrnrj
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gnq15ddheh
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dffmfsmjp4
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ie1wxley43
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.fwtwpjliml
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.hkvyb0ptbn
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% rtDW.nssyg3ul2x
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 8;

                    ;% rtDW.pvs3335hoi
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% rtDW.fyl5munlxu
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtDW.bs1qjqmif1
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% rtDW.edfdikmfnp
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 15;

                    ;% rtDW.dnqfkyv2uz
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 17;

                    ;% rtDW.ixu0au5oat
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 19;

                    ;% rtDW.bd53t3itfv
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 21;

                    ;% rtDW.bznvn4zrrr
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 23;

                    ;% rtDW.fmxddz4qrb
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 87;

                    ;% rtDW.akg4ejc3ma
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 88;

                    ;% rtDW.itgthkpdui
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 89;

                    ;% rtDW.ei3pjcz2m5
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 90;

                    ;% rtDW.ix01qch2kj
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 91;

                    ;% rtDW.iu1aexerwa
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 92;

                    ;% rtDW.ps0fgvqban
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 93;

                    ;% rtDW.kspbzdaf2j
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 94;

                    ;% rtDW.kjkz3elkj0
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 95;

                    ;% rtDW.m5mwnz3e3c
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 96;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 52;
            section.data(52)  = dumData; %prealloc

                    ;% rtDW.id1ec1se2a
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lhzmdhlnwj
                    section.data(2).logicalSrcIdx = 26;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.bzdscu24o4
                    section.data(3).logicalSrcIdx = 27;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.aqzmv3k4vt
                    section.data(4).logicalSrcIdx = 28;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ovhheqikkt
                    section.data(5).logicalSrcIdx = 29;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.nbvqi0lryc
                    section.data(6).logicalSrcIdx = 30;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ch3qij2jlm
                    section.data(7).logicalSrcIdx = 31;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.bqlnjhh13e
                    section.data(8).logicalSrcIdx = 32;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.gylnipw0uk
                    section.data(9).logicalSrcIdx = 33;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.kejosogyp1
                    section.data(10).logicalSrcIdx = 34;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.fjhc2c0sq1
                    section.data(11).logicalSrcIdx = 35;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.jw3uqr3u3w.LoggedData
                    section.data(12).logicalSrcIdx = 36;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.nux3heefjx.LoggedData
                    section.data(13).logicalSrcIdx = 37;
                    section.data(13).dtTransOffset = 14;

                    ;% rtDW.ayzmoix4ox.LoggedData
                    section.data(14).logicalSrcIdx = 38;
                    section.data(14).dtTransOffset = 16;

                    ;% rtDW.b3czypv5yd.LoggedData
                    section.data(15).logicalSrcIdx = 39;
                    section.data(15).dtTransOffset = 19;

                    ;% rtDW.cj2xpnofaw.AQHandles
                    section.data(16).logicalSrcIdx = 40;
                    section.data(16).dtTransOffset = 22;

                    ;% rtDW.p2fuzd2n1u.AQHandles
                    section.data(17).logicalSrcIdx = 41;
                    section.data(17).dtTransOffset = 23;

                    ;% rtDW.blchu5fgfp.AQHandles
                    section.data(18).logicalSrcIdx = 42;
                    section.data(18).dtTransOffset = 24;

                    ;% rtDW.puzcmpy0er.AQHandles
                    section.data(19).logicalSrcIdx = 43;
                    section.data(19).dtTransOffset = 25;

                    ;% rtDW.dkozbxr5jj.LoggedData
                    section.data(20).logicalSrcIdx = 44;
                    section.data(20).dtTransOffset = 26;

                    ;% rtDW.li3dwsqpy0.LoggedData
                    section.data(21).logicalSrcIdx = 45;
                    section.data(21).dtTransOffset = 27;

                    ;% rtDW.og021k3ddn.AQHandles
                    section.data(22).logicalSrcIdx = 46;
                    section.data(22).dtTransOffset = 30;

                    ;% rtDW.pazscy03am.AQHandles
                    section.data(23).logicalSrcIdx = 47;
                    section.data(23).dtTransOffset = 31;

                    ;% rtDW.gcn0hbx5lh.AQHandles
                    section.data(24).logicalSrcIdx = 48;
                    section.data(24).dtTransOffset = 32;

                    ;% rtDW.mdjek0kg4p.AQHandles
                    section.data(25).logicalSrcIdx = 49;
                    section.data(25).dtTransOffset = 33;

                    ;% rtDW.bwhl3doxip.LoggedData
                    section.data(26).logicalSrcIdx = 50;
                    section.data(26).dtTransOffset = 34;

                    ;% rtDW.cggnsfccqn.LoggedData
                    section.data(27).logicalSrcIdx = 51;
                    section.data(27).dtTransOffset = 37;

                    ;% rtDW.loexq3aa33.AQHandles
                    section.data(28).logicalSrcIdx = 52;
                    section.data(28).dtTransOffset = 38;

                    ;% rtDW.mlazb5xajw.AQHandles
                    section.data(29).logicalSrcIdx = 53;
                    section.data(29).dtTransOffset = 39;

                    ;% rtDW.jab5ce0r52.AQHandles
                    section.data(30).logicalSrcIdx = 54;
                    section.data(30).dtTransOffset = 40;

                    ;% rtDW.hb5zvvihes.LoggedData
                    section.data(31).logicalSrcIdx = 55;
                    section.data(31).dtTransOffset = 41;

                    ;% rtDW.fztbusk5wp.LoggedData
                    section.data(32).logicalSrcIdx = 56;
                    section.data(32).dtTransOffset = 46;

                    ;% rtDW.jqgw4ejmqk.LoggedData
                    section.data(33).logicalSrcIdx = 57;
                    section.data(33).dtTransOffset = 48;

                    ;% rtDW.gkbq1113ff.LoggedData
                    section.data(34).logicalSrcIdx = 58;
                    section.data(34).dtTransOffset = 55;

                    ;% rtDW.bri5kom5su.LoggedData
                    section.data(35).logicalSrcIdx = 59;
                    section.data(35).dtTransOffset = 56;

                    ;% rtDW.lzp2ea2fw4.LoggedData
                    section.data(36).logicalSrcIdx = 60;
                    section.data(36).dtTransOffset = 57;

                    ;% rtDW.is1htqb5zy
                    section.data(37).logicalSrcIdx = 61;
                    section.data(37).dtTransOffset = 58;

                    ;% rtDW.he53sqyi2y
                    section.data(38).logicalSrcIdx = 62;
                    section.data(38).dtTransOffset = 59;

                    ;% rtDW.bluywrteob
                    section.data(39).logicalSrcIdx = 63;
                    section.data(39).dtTransOffset = 60;

                    ;% rtDW.hvk3h2reru
                    section.data(40).logicalSrcIdx = 64;
                    section.data(40).dtTransOffset = 61;

                    ;% rtDW.cpbqzngdq3
                    section.data(41).logicalSrcIdx = 65;
                    section.data(41).dtTransOffset = 62;

                    ;% rtDW.bcintaxab2.LoggedData
                    section.data(42).logicalSrcIdx = 66;
                    section.data(42).dtTransOffset = 63;

                    ;% rtDW.mdiow2qiqc.LoggedData
                    section.data(43).logicalSrcIdx = 67;
                    section.data(43).dtTransOffset = 64;

                    ;% rtDW.n0eqia43rh.LoggedData
                    section.data(44).logicalSrcIdx = 68;
                    section.data(44).dtTransOffset = 66;

                    ;% rtDW.o5m3g5kndj.LoggedData
                    section.data(45).logicalSrcIdx = 69;
                    section.data(45).dtTransOffset = 68;

                    ;% rtDW.cj2xpnofawx.AQHandles
                    section.data(46).logicalSrcIdx = 70;
                    section.data(46).dtTransOffset = 71;

                    ;% rtDW.p2fuzd2n1u5.AQHandles
                    section.data(47).logicalSrcIdx = 71;
                    section.data(47).dtTransOffset = 72;

                    ;% rtDW.koevv0bes5.LoggedData
                    section.data(48).logicalSrcIdx = 72;
                    section.data(48).dtTransOffset = 73;

                    ;% rtDW.pt02ud3urr.LoggedData
                    section.data(49).logicalSrcIdx = 73;
                    section.data(49).dtTransOffset = 76;

                    ;% rtDW.fymgxe4xnz
                    section.data(50).logicalSrcIdx = 74;
                    section.data(50).dtTransOffset = 78;

                    ;% rtDW.lvf1iefemj
                    section.data(51).logicalSrcIdx = 75;
                    section.data(51).dtTransOffset = 79;

                    ;% rtDW.ipxkhgrdmq
                    section.data(52).logicalSrcIdx = 76;
                    section.data(52).dtTransOffset = 80;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.noeba4iykm
                    section.data(1).logicalSrcIdx = 77;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.nto4t3wzze
                    section.data(1).logicalSrcIdx = 78;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.d4gmtkdgyk
                    section.data(2).logicalSrcIdx = 79;
                    section.data(2).dtTransOffset = 19;

                    ;% rtDW.gqvonovqnm
                    section.data(3).logicalSrcIdx = 80;
                    section.data(3).dtTransOffset = 20;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.lylmywsair
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ix1eozqvus
                    section.data(2).logicalSrcIdx = 82;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.lf5hhij40v
                    section.data(3).logicalSrcIdx = 83;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.fdyfaaoo12
                    section.data(4).logicalSrcIdx = 84;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.lpjbl5m4vp
                    section.data(5).logicalSrcIdx = 85;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.hzgov1h5v5
                    section.data(6).logicalSrcIdx = 86;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.bitkls2ofs
                    section.data(1).logicalSrcIdx = 87;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mgejji5fmw
                    section.data(2).logicalSrcIdx = 88;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gxt1g1hy3f
                    section.data(3).logicalSrcIdx = 89;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jnl44abga2
                    section.data(4).logicalSrcIdx = 90;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
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


    targMap.checksum0 = 3779561728;
    targMap.checksum1 = 3522019344;
    targMap.checksum2 = 2004016594;
    targMap.checksum3 = 3022508733;


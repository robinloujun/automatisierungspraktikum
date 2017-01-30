% T3Adressen.m
%
% Adressen der Variablen aus dem Trace-File auslesen
%
% Klaus Schmid, 20.09.2000

% global adru1mess adru2mess adru3mess 
% global adrHoehe1 adrHoehe2 adrHoehe3
% global adrFaktor1 adrFaktor2 adrFaktor3
% global adrOffset1 adrOffset2 adrOffset3
% global adrSollHoehe1 adrSollHoehe2 
% global adrPumpe1 adrPumpe2
% global adruq1 adruq2
% global adrq1mess adrq2mess
% global adrq1Vorgabe adrq2Vorgabe 
% global adruq1Vorgabe adruq2Vorgabe 
% global adrAutomatik
% global adrV0 adrV1 adrV2 adrV3 adrV13o adrV13u adrV32o adrV32u 

mlibini;

% --- Füllhöhen der drei Tanks
% (gemessen in Volt)
adru1mess = mlib('GetTrcVar','Model Root/L:u1');
adru2mess = mlib('GetTrcVar','Model Root/L:u2');
adru3mess = mlib('GetTrcVar','Model Root/L:u3');
% (gemessen, umgerechnet in cm)
adrHoehe1 = mlib('GetTrcVar','Model Root/L:h1');
adrHoehe2 = mlib('GetTrcVar','Model Root/L:h2');
adrHoehe3 = mlib('GetTrcVar','Model Root/L:h3');
adrDiff1 = mlib('GetTrcVar','Model Root/L:Diff1');
adrDiff2 = mlib('GetTrcVar','Model Root/L:Diff2');

% (Parameter zur Umrechnung)
adrFaktor1 = mlib('GetTrcVar','Model Root/Umrechnunguh/P:Faktorh1.Value');
adrFaktor2 = mlib('GetTrcVar','Model Root/Umrechnunguh/P:Faktorh2.Value');
adrFaktor3 = mlib('GetTrcVar','Model Root/Umrechnunguh/P:Faktorh3.Value');
adrOffset1 = mlib('GetTrcVar','Model Root/Umrechnunguh/P:Offseth1.Value');
adrOffset2 = mlib('GetTrcVar','Model Root/Umrechnunguh/P:Offseth2.Value');
adrOffset3 = mlib('GetTrcVar','Model Root/Umrechnunguh/P:Offseth3.Value');
% (Sollwerte)
adrSollHoehe1 = mlib('GetTrcVar','Model Root/P:soll1.Value');
adrSollHoehe2 = mlib('GetTrcVar','Model Root/P:soll2.Value');

% --- Manuelle Vorgabe der Pumpenleistungen am Rechner
adrPumpe1 = mlib('GetTrcVar','Model Root/P:Pumpe1.Value');
adrPumpe2 = mlib('GetTrcVar','Model Root/P:Pumpe2.Value');

% --- Leistungen der beiden Pumpen 
% (gemessen in Volt)
adruq1 = mlib('GetTrcVar','Model Root/L:uq1');
adruq2 = mlib('GetTrcVar','Model Root/L:uq2');
% (gemessen, umgerechnet in Liter/Minute)
adrq1mess = mlib('GetTrcVar','Model Root/L:q1mess');
adrq2mess = mlib('GetTrcVar','Model Root/L:q2mess');
% (vorgegeben, in Liter/Minute)
adrq1Vorgabe = mlib('GetTrcVar','Model Root/Umrechnung2/L:q1Vorgabe');
adrq2Vorgabe = mlib('GetTrcVar','Model Root/Umrechnung2/L:q2Vorgabe');
% (vorgegeben, umgerechnet in Volt)
adruq1Vorgabe = mlib('GetTrcVar','Model Root/Umrechnung2/L:uq1Vorgabe');
adruq2Vorgabe = mlib('GetTrcVar','Model Root/Umrechnung2/L:uq2Vorgabe');

% --- Pumpen auf Automatik stellen
adrAutomatik = mlib('GetTrcVar','Model Root/P:Automatik.Value');

% --- Ventile
adrV0 = mlib('GetTrcVar','Model Root/P:V0.Value');
adrV1 = mlib('GetTrcVar','Model Root/P:V1.Value');
adrV2 = mlib('GetTrcVar','Model Root/P:V2.Value');
adrV3 = mlib('GetTrcVar','Model Root/P:V3.Value');
adrV13o = mlib('GetTrcVar','Model Root/P:V13o.Value');
adrV13u = mlib('GetTrcVar','Model Root/P:V13u.Value');
adrV32o = mlib('GetTrcVar','Model Root/P:V32o.Value');
adrV32u = mlib('GetTrcVar','Model Root/P:V32u.Value');


% T3Kalibrieren.m
% 
% Bestimmt aus zwei Messungen die Parameter der linearen Umrechnung zwischen
%  der Spannung u und der Füllhöhe der Tanks
%
% Klaus Schmid, 18.9.2000

% Anzahl Messwerte
N=500;
%
% Adressen der Variablen aus dem Trace-File auslesen
T3Adressen;
%
tank1 = zeros(1,N);
tank2 = zeros(1,N);
tank3 = zeros(1,N);
%
u1 = [0 0];
u2 = [0 0];
u3 = [0 0];
%
if mlib('isapplrunning')
   disp('Stellen Sie an den Tanks jeweils ca. 10cm Füllstand ein und drücken Sie dann eine Taste');
   pause
   % N Messungen
   disp('Messung läuft ...');
   for i =1:N
      tank1(i) = mlib('Read',adru1mess);
      tank2(i) = mlib('Read',adru2mess);
      tank3(i) = mlib('Read',adru3mess);
   end;
   % Ergebnis: unterer Stützpunkt der Interpolation
   u1(1) = mean(tank1);
   u2(1) = mean(tank2);
   u3(1) = mean(tank3);
   % an Skala abgelesene Höhen
   Hoehen1 = input('geben Sie die Füllstände in cm ein ([h1, h2, h3]) :')
   h1(1) = Hoehen1(1);
   h2(1) = Hoehen1(2);
   h3(1) = Hoehen1(3);
   %
   disp('Stellen Sie jetzt ca. 40cm Füllstand ein und drücken Sie dann eine Taste');
   pause
   % N Messungen
   disp('Messung läuft ...');
   for i =1:N
      tank1(i) = mlib('Read',adru1mess);
      tank2(i) = mlib('Read',adru2mess);
      tank3(i) = mlib('Read',adru3mess);
   end;
   % Ergebnis: unterer Stützpunkt der Interpolation
   u1(2) = mean(tank1);
   u2(2) = mean(tank2);
   u3(2) = mean(tank3);
   % an Skala abgelesene Höhen
   Hoehen2 = input('geben Sie die Füllstände in cm ein ([h1, h2, h3]) :')
   h1(2) = Hoehen2(1);
   h2(2) = Hoehen2(2);
   h3(2) = Hoehen2(3);
   %
   % Berechnen der Parameter im Simulink-Modell
   Faktorh1 = (h1(2) -h1(1))/(u1(2)-u1(1));
   Offseth1 = h1(1) - u1(1)* (h1(2)-h1(1))/(u1(2)-u1(1));
   Faktorh2 = (h2(2) -h2(1))/(u2(2)-u2(1));
   Offseth2 = h2(1) - u2(1)* (h2(2)-h2(1))/(u2(2)-u2(1));
   Faktorh3 = (h3(2) -h3(1))/(u3(2)-u3(1));
   Offseth3 = h3(1) - u3(1)* (h3(2)-h3(1))/(u3(2)-u3(1));
   %Faktorh1
   %Faktorh2
   %Faktorh3
   %Offseth1
   %Offseth2
   %Offseth3
   %
   % Schreiben der berechneten Werte
   mlib('Write',adrFaktor1,'Data',Faktorh1);
   mlib('Write',adrFaktor2,'Data',Faktorh2);
   mlib('Write',adrFaktor3,'Data',Faktorh3);
   mlib('Write',adrOffset1,'Data',Offseth1);
   mlib('Write',adrOffset2,'Data',Offseth2);
   mlib('Write',adrOffset3,'Data',Offseth3);
else
   disp('DSP läuft nicht!');
end;

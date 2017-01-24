%----------------------------------------------------------------------
% Bearbeitet von S. Hohmann, IRS, Universitaet Karlsruhe (TH), Mai 1998
% Bearbeitet von Martin Sackmann, IRS, Universitaet Karlsruhe (TH), Juni 1999
%----------------------------------------------------------------------


clc;
%clear all;
close all;



%zu approximierende Vektoren

P = [-3.0 +2.0];

T = [+0.4 +0.8];

%    PLOTTING THE ERROR SURFACE AND CONTOUR
%    ======================================

%    ERRSURF calculates errors for a neuron with a range of
%    possible weight and bias values.  PLOTES plots this error
%    surface with a contour plot underneath.

wv = -4:0.4:4;
bv = -4:0.4:4;
es = errsurf(P,T,wv,bv,'logsig');
plotes(wv,bv,es,[60 30]);



net=newff([-3 2],[1],{'logsig'},'traingd');


k = 0;

% Startwerte
W = -0.99;
B = -0.49;
   

while (k ~= 1 & k ~= 2 & k ~= 3)
    disp('Auswahl der Startwerte:')
    disp(' ')
    disp(['  (1) Feste Vorgabe mit den Startwerten:  W = ',num2str(W), ' ; B = ',num2str(B),' .'] )
    disp('  (2) Mit der Maus in der Grafik "Error Contour" festlegen.')
    disp('  (3) Die gerade berechneten Werte verwenden.')

    disp(' ')
    k = input('Bitte die Nummer eingeben: ');
    if isempty(k), k = 0; end
  end

if k == 1
      
   net.iw{1} = W; %;%-1.5;% -2.1617;
	net.b{1}  = B; % ;%2.2;%-1.7862;

elseif k == 2
   
  subplot(1,2,2);
  [W,B] = ginput(1)
  net.iw{1} = W;
  net.b{1} = B;

      
elseif k == 3
   
   W = W_neu
   B = B_neu
   net.iw{1} = W_neu;
   net.b{1} = B_neu;
   
end




%    TRAINING THE NETWORK
%    ====================

%    TBP1 uses backpropagation to train 1-layer networks.

df = 1;    % Frequency of progress displays (in epochs).
me = 100;  % Maximum number of epochs to train.
eg = 0.0009; % Sum-squared error goal.

lr = input('Bitte geben Sie die Lernrate ein:')
%lr = 1;    % Learning rate.

net.trainParam.show=1;
net.trainParam.lr=lr;
net.trainParam.epochs=1;
net.trainParam.goal=eg;


TRh.epoch=[];
TRh.perf=[];
TRh.vperf=[];
TRh.tperf=[];

h=plotep(net.iw{1},net.b{1},0);
set(gcf,'Tag','blabla')
EG=[];

for i=1:me/2

    
  %  [net,tr]=train_n(net,P,T);
    
    [net,tr] = train(net,P,T);

    %[slideData,net,tr]=nnslides(''trainlin'',slideData,net,P,T);
    
   TRh.perf=[TRh.perf,tr.perf];
   TRh.vperf=[TRh.vperf,tr.vperf];
   TRh.tperf=[TRh.tperf,tr.tperf];
   sz=size(TRh.perf);
   %if  tr.perf(2)< eg break, end
   if  tr.perf(1)< eg break, end
  
   figure(findobj('Tag','blabla'))
   h = plotep(net.iw{1},net.b{1},tr.perf(2),h);
   
end


TRh.epoch=0:sz(2)-1;   
for i=0:sz(2)-1
    EG=[EG,eg];
end

disp(' ');
disp('Parameterwerte nach dem Training:')
disp(' ')


W_neu = net.iw{1}
B_neu = net.b{1}

disp(' ')
disp(' ')
disp('Für die Darstellung der Fehlerkurve bitte eine Taste drücken.')
disp(' ')

pause % Strike any key to see a plot of errors...
hold off
figure
semilogy(TRh.epoch,TRh.perf)
hold on
semilogy(TRh.epoch,EG,'r')


werte = -5:0.1:5;
daten = zeros(length(werte),1);

for i = 1:length(werte)
   
   daten(i) = 1/(1+exp(-(werte(i)*W_neu+B_neu)));
   
end;
xlabel('Epochen')
ylabel('Fehler')
   	
disp(' ')
disp(' ')
disp('Für die Darstellung der approximierenden Funktion bitte eine Taste drücken.')
disp(' ')

pause % Strike any key to see a plot of errors...
   
   
figure
plot(werte,daten,-3,0.4,'r+',2,0.8,'r+')
xlabel('Eingang')
ylabel('Ausgang')
hold on


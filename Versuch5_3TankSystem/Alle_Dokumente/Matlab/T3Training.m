% T3Training.m
%
% Trainingsdaten für das neuronale Netz erfassen
%
% Klaus Schmid 18.9.2000
close all 
clc
% Ermitteln, ob Te und Ta bereits angelegt sind
var = evalin('base','who');
hilf = 0;
for ki=1:length(var)
   if isequal(var{ki},'Te')
      hilf = hilf +1;
   end;
   if isequal(var{ki},'Ta')
      hilf = hilf+1;
   end;
end;
if ~isequal(hilf,2)
	assignin('base','Te',[]);
   assignin('base','Ta',[]);
end;

% Automatik auf manuelle Vorgabe vom Rechner aus stellen
mlib('Write',adrAutomatik,'Data',1);

% Pumpen ausschalten
mlib('Write',adrPumpe1,'Data',0);
mlib('Write',adrPumpe2,'Data',0);

% Ventile schließen
mlib('Write',adrV0,'Data',0);
mlib('Write',adrV1,'Data',0);
mlib('Write',adrV2,'Data',0);
mlib('Write',adrV3,'Data',0);
mlib('Write',adrV13o,'Data',0);
mlib('Write',adrV13u,'Data',0);
mlib('Write',adrV32o,'Data',0);
mlib('Write',adrV32u,'Data',0);

% Sollhöhen auslesen
h1soll = 30;% mlib('Read',adrSollHoehe1);
h2soll = 20; %mlib('Read',adrSollHoehe2);

% Fenster für Karte zeichnen
winKarte = figure;
 clf;
 set(winKarte,'Units','normalized');
 set(winKarte,'Position',[0.1 0.2 0.5 0.4]);
 set(winKarte,'Color',[0.752941 0.752941 0.752941]);
 set(winKarte,'numbertitle','off');
 set(winKarte,'DefaultuicontrolUnits','normalized');
 set(winKarte,'MenuBar','none');
 set(winKarte,'Name','Karte mit Ausgangspunkten zum Trainieren');
 set(winKarte,'Tag','Karte');
 axis([0 60 0 60]);
 zoom on;
 grid on;
 hold on;
 xlabel('Füllhöhe linker Tank in cm')
 ylabel('Füllhöhe rechter Tank in cm')
% Sollwerte einzeichnen 
 plot(h1soll,h2soll,'r*');
 x=h1soll; y=h2soll;

% --- Fenster zum Anzeigen der Daten
winAnzeige = figure;
 clf;
 set(winAnzeige,'Tag','Anzeige'); %% war: add
 set(winAnzeige,'Color',[0.752941 0.752941 0.752941]);
 set(winAnzeige,'numbertitle','off');
 set(winAnzeige,'DefaultuicontrolUnits','normalized');
 set(winAnzeige,'Units','normalized');
 set(winAnzeige,'Position',[0.63    0.2    0.3    0.5]);
 set(winAnzeige,'MenuBar','none');
 set(winAnzeige,'defaultuicontrolhorizontalalignment','left');
 set(winAnzeige,'Name','Aktuelle Messwerte');
 % Rahmen
 uicontrol('style','frame','position',[0.05 0.79 0.9 0.19]);
 uicontrol('style','frame','position',[0.05 0.57 0.9 0.2]);
 uicontrol('style','frame','position',[0.05 0.25 0.9 0.3]);
 uicontrol('style','text','position',[0.1 0.91 0.4 0.05],'string','Startwerte (in cm):');
 % Startwerte der Höhen
 uicontrol('style','text','position',[0.1 0.82 0.17 0.08],'fontname','arial','fontsize',12,'string','Tank 1:');
 uicontrol('style','text','position',[0.5 0.82 0.17 0.08],'fontname','arial','fontsize',12,'string','Tank 2:');   
 uicontrol('style','text','position',[0.29 0.82 0.19 0.08],'fontname','arial','fontsize',16,'string',' ','tag','H1Start');
 uicontrol('style','text','position',[0.69 0.82 0.19 0.08],'fontname','arial','fontsize',16,'string',' ','tag','H2Start');
 uicontrol('style','text','position',[0.1 0.7 0.4 0.05],'string','Aktuelle Werte (in cm):');
 % aktuelle Höhen
 uicontrol('style','text','position',[0.1 0.6 0.17 0.08],'fontname','arial','fontsize',12,'string','Tank 1:');
 uicontrol('style','text','position',[0.5 0.6 0.17 0.08],'fontname','arial','fontsize',12,'string','Tank 2:');   
 uicontrol('style','text','position',[0.29 0.6 0.19 0.08],'fontname','arial','fontsize',16,'string',' ','tag','H1');
 uicontrol('style','text','position',[0.69 0.6 0.19 0.08],'fontname','arial','fontsize',16,'string',' ','tag','H2');
 uicontrol('style','text','position',[0.1 0.7 0.4 0.05],'string','Aktuelle Werte');
 % gemessene Pumpenleistungen
 uicontrol('style','text','position',[0.1 0.38 0.18 0.08],'fontname','arial','fontsize',10,'string','Pumpe 1:');
 uicontrol('style','text','position',[0.5 0.38 0.18 0.08],'fontname','arial','fontsize',10,'string','Pumpe 2:');   
 uicontrol('style','text','position',[0.29 0.38 0.19 0.08],'fontname','arial','fontsize',16,'string',' ','tag','P1');
 uicontrol('style','text','position',[0.69 0.38 0.19 0.08],'fontname','arial','fontsize',16,'string',' ','tag','P2');
 uicontrol('style','text','position',[0.1 0.48 0.4 0.05],'string','Pumpenleistung (in l/min):');
 % Slider für Pumpenleistungen
 uicontrol('style','slider','position',[0.1 0.28 0.38 0.08],'min',0,'max',7,'value',0,'tag','pl1','callback','T3Pumpen');
 uicontrol('style','slider','position',[0.5 0.28 0.38 0.08],'min',0,'max',7,'value',0,'tag','pl2','callback','T3Pumpen');   

 uicontrol('style','pushbutton','position',[0.05 0.04 0.3 0.15],'fontname','arial',...
      'fontweight','bold','fontsize',18,'string','START','callback','T3Aufzeichnen','tag','start');
 uicontrol('style','pushbutton','position',[0.4 0.04 0.3 0.15],'fontname','arial',...
      'fontweight','bold','fontsize',18,'string','STOP','enable','off','callback','Aufzeichnen = 0;','tag','stop');
 uicontrol('style','pushbutton','position',[0.75 0.04 0.2 0.1],'string','Ende','callback','NurAnzeigen=0;','tag','ende');
 
 
NurAnzeigen = 1;
while NurAnzeigen
   Hoehe1 = mlib('Read',adrHoehe1);
   Hoehe2 = mlib('Read',adrHoehe2);
   q1Mess = mlib('Read',adrq1mess);
   q2Mess = mlib('Read',adrq2mess);
   
   pause(0.01);

   set(findobj('tag','H1Start'),'string',num2str(Hoehe1,'%.1f'));
   set(findobj('tag','H2Start'),'string',num2str(Hoehe2,'%.1f'));
   set(findobj('tag','P1'),'string',num2str(q1Mess,'%.1f'));
   set(findobj('tag','P2'),'string',num2str(q2Mess,'%.1f'));      

end; %NurAnzeigen

delete(winKarte);
delete(winAnzeige);
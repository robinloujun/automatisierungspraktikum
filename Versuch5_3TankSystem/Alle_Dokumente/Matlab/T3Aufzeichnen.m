% Flag setzen
Aufzeichnen = 1;

% Startwert Einzeichnen
alteHoehe1 = mlib('read',adrHoehe1);
alteHoehe2 = mlib('read',adrHoehe2);
figure(winKarte);
plot(alteHoehe1,alteHoehe2,'bo');

% gemessene Daten
eingang = [];
ausgang = [];

% Ventile öffnen
mlib('Write',adrV0,'Data',1);
mlib('Write',adrV1,'Data',0);
mlib('Write',adrV2,'Data',0);
mlib('Write',adrV3,'Data',0);
mlib('Write',adrV13o,'Data',0);
mlib('Write',adrV13u,'Data',1);
mlib('Write',adrV32o,'Data',0);
mlib('Write',adrV32u,'Data',1);

set(findobj('tag','stop'),'enable','on');
set(findobj('tag','start'),'enable','off');
set(findobj('tag','ende'),'enable','off');

mlib('Selectboard');

vars = mlib('GetTrcVar',{...
        'Model Root/L:Diff1';...
        'Model Root/L:Diff2';...
        'Model Root/L:q1mess';...
        'Model Root/L:q2mess'});
 
mlib('Tracevars',vars);

mlib('setframe',0.1,5,-0.001,1);

while Aufzeichnen
   mlib('startcapture');
   while mlib('capturestate')~=0 
      if ~mlib('isapplrunning') break; end;
      drawnow;   
	end;
   data=mlib('FetchData');
   ausgang = [ausgang,data(1:2,:)];
   eingang = [eingang,data(3:4,:)];
   
   temp = size(data,2);
   
   Differenz1 	= data(1,temp);
   Hoehe1		= h1soll - Differenz1;
   Differenz2 	= data(2,temp);
   Hoehe2		= h2soll - Differenz2;
   pumpe1 = data(3,temp);
   pumpe2 = data(4,temp);
   
   figure(winKarte);
   plot([alteHoehe1,Hoehe1],[alteHoehe2,Hoehe2]);
   
   alteHoehe1 = Hoehe1;
   alteHoehe2 = Hoehe2;
   
   set(findobj('tag','H1'),'string',num2str(Hoehe1,'%.1f'));
   set(findobj('tag','H2'),'string',num2str(Hoehe2,'%.1f'));
   set(findobj('tag','P1'),'string',num2str(pumpe1,'%.1f'));
   set(findobj('tag','P2'),'string',num2str(pumpe2,'%.1f'));      
end; %Aufzeichnen

% Pumpen abschalten
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

tempInput = questdlg('Sollen diese Daten übernommen werden?');
if isequal(tempInput,'Yes')
	% Messdaten zuweisen
    assignin('base','Ta',[evalin('base','Ta'),eingang]);
    assignin('base','Te',[evalin('base','Te'),ausgang]);
end;

% Buttons aktivieren
set(findobj('tag','stop'),'enable','off');
set(findobj('tag','start'),'enable','on');
set(findobj('tag','ende'),'enable','on');

% Anzeige der aktuellen Werte löschen
set(findobj('tag','H1'),'string',' ');
set(findobj('tag','H2'),'string',' ');

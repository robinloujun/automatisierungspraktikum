function netzanzeige(netz)

% Eingangsdaten erzeugen:
N=40;
x=linspace(-10,10,N);
y=linspace(-10,10,N);
%
% Resultate berechnen
Pumpe1=zeros(N);
Pumpe2=zeros(N);
%
for kx=1:N
   xInput = ones(1,N)*x(kx);
   NetzInput = [xInput; y];
   Pumpen = sim(netz,NetzInput);
   Pumpe1(kx,:) = Pumpen(1,:);
   Pumpe2(kx,:) = Pumpen(2,:);
end; %kx=1:N
%
% Anzeigen
figure
mesh(y,x,Pumpe1)
title('Kennfeld Neuronales Netz Tank 1')
xlabel('Regeldifferenz Tank 2 in cm')
ylabel('Regeldifferenz Tank 1 in cm')
zlabel('Leistung Pumpe 1 in l/min')
figure
mesh(y,x,Pumpe2)
title('Kennfeld Neuronales Netz Tank 2')
xlabel('Regeldifferenz Tank 2 in cm')
ylabel('Regeldifferenz Tank 1 in cm')
zlabel('Leistung Pumpe 2 in l/min')

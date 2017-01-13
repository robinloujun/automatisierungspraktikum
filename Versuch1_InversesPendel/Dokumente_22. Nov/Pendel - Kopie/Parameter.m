
clc;
clear all;

% Masse Schlitten
M = 18.2;
% Masse Pendel
m = 0.3;
% L\[ADoubleDot]nge Pendel
l = 0.3;
% Tr\[ADoubleDot]gheitsmoment
J_S0 = (1/3)*m*(2*l)^2;
% Gravitationskonstante
g = 9.81;

% Startwerte
x1 = 0.7;
x2 = 0;
x3 = 0.7;
x4 = 0;

% Beobachterkoeffizienten
p=300;

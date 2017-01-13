clear; clc;

Jv = 3e-3;
Jr = 11e-3;
Jl = 11e-3;
kr1 = 2.4655e-3;
kr2 = -1.1534e-3;
kl1 = 5.5386e-3;
kl2 = -8.9816e-4;
kv = 2.8981e-3;
c = 0.2447;

On = 104.72;
Mn = 0.35;
tn = 1;
cn = Mn / (On * tn);

A = [-kv * tn / Jv , -Mn*tn/(On*Jv), 0, 0; ...
     c/cn, 0, -c / (2*cn), -c / (2*cn); ...
     0, Mn * tn / (2*On*Jr), -kr1 * tn / Jr, kr2*tn / Jr; ...
     0, Mn * tn / (2*On*Jl), kl2*tn / Jl, -kl1*tn / Jl]
 
B = [Mn * tn / (On * Jv), 0, 0; ...
    0, 0, 0; ...
    0, -Mn*tn / (On * Jr), 0; ...
    0, 0, -Mn*tn / (On * Jl)]

C = [0,1,0,0;0,0,1,0;0,0,0,1]

D= [0 0 0;0 0 0;0 0 0]

C(1,:)'*B
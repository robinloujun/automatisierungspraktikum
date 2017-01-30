u=[ 0 0 0;
    0 0 1;
    0 1 0;
    0 1 1;
    1 0 0;
    1 0 1;
    1 1 0;
    1 1 1]';
y=[ 0;0;0;0;1;0;0;1]';
t=[ 0.1 0.1 0.9;
    0.1 0.9 0.1;
    0.9 0.1 0.1;
    0 0 2;
    0 1 3;
    1 3 3]';
net=feedforwardnet(2);
net.trainparam.goal=1e-10;
net.divideFcn='';
net_train=train(net,u,y);
Ausg_train=sim(net_train,u);
Ausg_test=sim(net_train,t)
plotconfusion(y,Ausg_train);
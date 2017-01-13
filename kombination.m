function kombination(zaehler,zaehler_max,rekursionstiefe)
temp=size(zaehler);
flag=temp(1,2);
j=zaehler;
while(rekursionstiefe<(flag+1))
    if(zaehler(1,flag+1-rekursionstiefe)==zaehler_max(1,flag+1-rekursionstiefe))
        zaehler(1,flag+1-rekursionstiefe)=0;
        rekursionstiefe=rekursionstiefe+1;
        kombination(zaehler,zaehler_max,rekursionstiefe);
        break;
    else
        if(isequal(zaehler,zeros(1,flag)) & isequal(rekursionstiefe,1))
              display(zaehler);
        end
        zaehler(1,flag+1-rekursionstiefe)=zaehler(1,flag+1-rekursionstiefe)+1;
        rekursionstiefe=1;
    end
    display(zaehler);
end
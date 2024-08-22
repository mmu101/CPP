//CPP program to find the Simple Interest and Compound Interest 

#include <iostream>
#include <bits/stdc++.h>

int main()
{
    double SI=0,CI=0;
    double P,T,R,Amount;
    std::cout<<"Enter the Principal, Time, Rate of Interest"<<std::endl;
    std::cin>>P>>T>>R;
    SI=P*T*R/100;
    std::cout<<"Simple Interest = "<<SI<<std::endl;
    Amount=P*pow((1+R/100),T);
    CI=Amount-P;
    std::cout<<"Compound Interest = "<<CI<<std::endl;
}
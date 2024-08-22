//CPP Program to convert Fahrenheit to Celsius Conversion
#include <iostream>

//Formula C = (F-32)*(5.0/9.0)

float TempConversion(float TempInF)
{
    return (TempInF-32)*(5.0/9.0);
}

int main()
{
    float TempInF=0;
    std::cout<<"Enter the temperature in Fahrenheit"<<std::endl;
    std::cin>>TempInF;
    float result=TempConversion(TempInF);
    std::cout<<"Resultant temperature in Celsius "<<result<<std::endl;
}


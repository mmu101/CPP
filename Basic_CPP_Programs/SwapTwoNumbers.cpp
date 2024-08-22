//CPP Programs to Swap Two Numbers
#include <iostream>

/*Pass-by-Reference: Functions receive references to the original variables. 
Changes inside the function directly affect the original variables.*/
void swap(int &num1,int &num2)
{
    int temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    //Alternative Solution without using temp variable
   /* num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;*/  
}
int main()
{
    int num1,num2;
    std::cout<<"Enter two numbers to be swapped"<<std::endl;
    std::cin>>num1;
    std::cin>>num2;
    std::cout<<"Numbers before Swapping "<<num1<<" "<<num2<<std::endl;
    swap(num1,num2);
    std::cout<<"Numbers after Swapping "<<num1<<" "<<num2<<std::endl;
}
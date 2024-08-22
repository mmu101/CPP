#include <iostream>
#include <bits/stdc++.h>
long SumOfTwoNumbers(long num1,long num2)
{
    return num1+num2;
   // return log(exp(num1)*exp(num2)); //Alternate Solution using logarithms and exponents 
   // Alternate Solution using Recursion and bitwise operations
  /** if(!num1)
    return num2
   else
    return SumOfTwoNumbers((num1&num2)<<1,(num1^num2));*/
/*Bitwise AND (&) is used to determine the carry bits.
Bitwise XOR (^) is used to compute the sum without considering the carry.
Left Shift (<<) is used to adjust the carry to the correct bit position.*/
}

long ProductOfTwoNumbers(long num1,long num2)
{
    return num1*num2;
}

int main()
{
    long num1=0,num2=0;
    std::cout<<"Enter two numbers : "<<std::endl;
    std::cin>>num1;
    std::cin>>num2;
    long result=SumOfTwoNumbers(num1,num2);
    std::cout<<"The Sum is : "<<result<<std::endl;
    long product=ProductOfTwoNumbers(num1,num2);
    std::cout<<"The Product is : "<<product<<std::endl;
    return 0;
}
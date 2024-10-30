#include <iostream>
#include <stdc++.h>

bool isLeapYear(int year)
{
  if(year%400==0)
    return true;
  else if(year%100==0)
    return false;
  else if(year%4==0)
    return true;
  else
    return false;
}
int main()
{
  int year=0,result=0;
  std::cin>>"Enter a year\n"<<std::cout;
  std::cin>>year;
  result=isLeapYear(year);
  if(result)
    std::cout<<"A leap year\n";
  else
    std::cout<<"Not a leap year\n";
  return 0;
}

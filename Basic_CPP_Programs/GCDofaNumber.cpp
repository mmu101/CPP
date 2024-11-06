#include <iostream>

int GCD(int a,int b)
{
  if(a==0)
    return b;
  if(b==0)
    return a;
  if(a>b)
    return GCD(a-b,b);
  return GCD(a,b-a);
}
int main()
{
  int a=0,b=0;
  std::cout<<"Enter two numbers\n";
  cin>>a>>b;
  int res=GCD(a,b);
  std::cout<<"GCD of a number is : "<<res<<std::endl;
  return 0;
}
  

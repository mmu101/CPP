#include <iostream>

int gcd(int a,int b)
{
	if(b==0)
		return a;
	return (b,a%b);
}
int lcm(int a, int b)
{
	return (a/gcd(a,b))*b;
}
int main()
{
	int a,b;
	std::cout<<"Enter 2 numbers\n"<<std::endl;
	std::cin>>a>>b;
	int result=lcm(a,b);
	return 0;
}

#include <iostream>

int ReverseNum(int num)
{
	int rev=0;
	while(num>0)
	{	
		rev=rev*10+num%10;
		num=num/10;
	}
	return rev;
}
int main()
{
	int num=0;
	std::cout<<"Enter the number to be reversed\n";
	std::cin>>num;
	int res=ReverseNum(int num);
	std::cout<<"Reversed Number\n";
	return 0;
}
  

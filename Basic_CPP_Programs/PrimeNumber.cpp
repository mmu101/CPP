#include <iostream>
	
int main()
{
	int num=0,count=0;
	std::cout<<"Enter the number\n";
	std::cin>>num;
	if(num<=1)
		std::cout<<"Not a PrimeNumber\n";
	for(int i=0;i<=num;i++)
	{
		if(num%i==0)
			count++
	}
	if(count>2)
		std::cout<<"Not a PrimeNumber\n";
	else
		std::cout<<"Not a PrimeNumber\n";
	return 0;
}
	

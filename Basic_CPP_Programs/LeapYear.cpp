#include <iostream>

int main()
{
	int year;
	std::cout<<"Enter the year: <<std::endl;
	std::cin>>year;
	if(year%400==0)
		std::cout<<"leap year\n";
	else if(year%100==0)
		std::cout<<"Not a leap year\n";
	else if(year%4==0)
		std::cout<<"leap year\n";
	else 
		std::cout<<"Not a leap year\n";
}
	

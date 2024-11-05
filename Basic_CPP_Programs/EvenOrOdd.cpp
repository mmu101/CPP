//To check odd or even
#include <iostream>

int main()
{
	int number=0;
	std::cout<<"Enter the number :"<<std::endl;
	std::cin>>number;
	if(number%2==0)
		std::cout<<"Even Number\n";
	else
		std::cout<<"Odd Number\n";
	return 0;
}  

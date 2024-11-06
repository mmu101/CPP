#include <iostream>

int factorial(int num)
{
	if(num ==0)
		return 1;
	return n*factorial(num-1);
}

int main(){
	int n;
	std::cout<<"Enter the number\n";
	cin>>n;
	int res=factorial(n);
	std<<cout<<"Factorial : "res<<"\n";
}
	
	
  

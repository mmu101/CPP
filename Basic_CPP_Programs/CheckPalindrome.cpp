#include <iostream>

int isPalindrome(int num)
{
	while(num>0)
	{
		rev_num=rev_num*10+num%10;
		num=num/10;
	}
	return rev_num;
}
int main(){
	int num=0,rev_num=0;
	std::cout<<"Enter the number\n: ";
	std::cin>>num;
	int res=isPalindrome(int num);
	if(res==num)
		std::cout<<"It is a Palindrome\n";
	else
		std::cout<<"Not a Palindrome\n";
	return 0;
}


  
    

  

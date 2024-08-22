//CPP Program to print your name
#include <iostream>

int main()
{
    std::string name; 
    std::cout<<"Enter your Name: "<<std::endl;
    std::getline(std::cin, name);
    std::cout<<"Entered name is: "<<name<<std::endl;
    return 0;
}

/*The getline function in C++ is used to read a line of text from an input stream. 
It’s particularly useful when you want to read an entire line of input, including spaces,
into a std::string variable. getline reads characters from the input stream until it encounters a 
newline character ('\n'), the end of the file, or the end of the stream.
The newline character is extracted from the stream but not stored in the std::string variable.
If the newline character is found, it is discarded; the next read operation will start from the new line.
If getline reaches the end of the stream before finding a newline character, it will read until the end of the stream and then stop.
*/
/*
Exmaple of how to reverse a string.
*/

#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string input_string;
    std::string reverse_string;
    std::cout << "Please provide a string: ";
    std::getline(std::cin, input_string);
    char tmp[100];
    int k = 0; 
    for(int i = input_string.length(); i>=0; i--, k++)
    {
        tmp[k] = input_string[i];
    }
    reverse_string = tmp;
    std::cout<<std::endl;
    std::cout << "The reverse is: ";
    std::cout << tmp << std::endl;
}

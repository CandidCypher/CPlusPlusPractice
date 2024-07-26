/*
Basic demonstration of using inputs in c++
*/

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::cout<<"Demonstration of using inputs"<<std::endl;
    bool access_granted = false;

    while(!access_granted)
    {
        std::string str;
        std::cout<<"What is your favorite color? ";
        std::getline(std::cin, str);
        std::cout<<"You provided: " << str << " " << std::endl;
        if(str == "yellow")
        {
            access_granted = true;
        }
    }
}
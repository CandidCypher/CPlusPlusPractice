#include <iostream>

// Bad practice but if you are writing code using a single namespace,
// it's not that bad. 

using namespace std;

int main(int argc, char** argv)
{
    std::cout << "Hello world!"<<std::endl;

    if (argc>1)
    {
        std::cout<<"Executable arguments: ";
        // The first argument passed to the executable is the name of the executable
        for(int i =0; i<(argc); i++)
        {
            std::cout<<argv[i]<<" ";
        }
        std::cout<<std::endl;
    }
    // Return codes are very important. 
    return 0;
}

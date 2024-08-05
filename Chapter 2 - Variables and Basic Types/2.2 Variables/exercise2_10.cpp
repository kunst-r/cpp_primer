// What are the initial values, if any, of each of the following variables?

#include <iostream>
#include <string>

std::string global_string; // empty string
int global_int; // 0

int main()
{
    std::string local_string; // empty string
    int local_int; // 0

    std::cout << "global_string = " << global_string << std::endl;
    std::cout << "global_int = " << global_int << std::endl;
    std::cout << "local_string = " << local_string << std::endl;
    std::cout << "local_int = " << local_int << std::endl;

    return 0;
}
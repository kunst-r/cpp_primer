// What is the value of j in the following program?

#include <iostream>

int i = 42;

int main()
{
    int i = 100;
    int j = i; // j = local i = 100

    std::cout << "j = " << j << std::endl;

    return 0;
}
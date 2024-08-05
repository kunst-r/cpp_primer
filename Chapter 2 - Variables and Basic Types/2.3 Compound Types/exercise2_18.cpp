// Write code to change the value of a pointer. Write code to change the value to which the pointer points.

#include <iostream>

int main()
{
    int i = 42;
    std::cout << i << std::endl;
    int *pi = nullptr;
    pi = &i;
    *pi += 10;
    std::cout << i << std::endl;

    return 0;
}
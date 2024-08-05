// Write a program that prompts the user for two integers. 
// Print each number in the range specified by those two integers.

#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    while (a <= b)
        {
            std::cout << a << " " << std::flush;
            a++;
        }

    return 0;
}
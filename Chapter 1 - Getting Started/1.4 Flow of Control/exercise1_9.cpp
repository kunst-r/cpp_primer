// Write a program that uses a while to sum the numbers from 50 to 100.

#include <iostream>

int main()
{
    int i = 50;
    int sum = 0;
    while (i <= 100)
    {
        sum += i;
        ++i;
    }

    std::cout << "The sum of numbers between 50 and 100 inclusive is " << sum << std::endl;

    return 0;
}
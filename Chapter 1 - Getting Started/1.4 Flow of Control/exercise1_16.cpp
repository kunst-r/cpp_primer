// Write your own version of a program that prints the sum of a set of integers read from cin.

#include <iostream>

int main()
{
    int val;
    int sum = 0;
    while (true)
    {
        if (std::cin >> val)
        {
            sum += val;
        }
        else
        {
            break;
        }
    }
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
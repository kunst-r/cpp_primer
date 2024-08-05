// Rewrite the first two exercises from § 1.4.1 (p. 13) using for loops.

#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << "Sum of numbers 50-100 is " << sum << std::endl;

    std::cout << std::endl;
    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << " " << std::flush;
    }

    return 0;
}
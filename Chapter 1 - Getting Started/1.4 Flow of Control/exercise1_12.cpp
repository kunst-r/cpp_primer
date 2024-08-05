// What does the following for loop do? What is the final value of sum?

// the following for loop sums all the numbers between -100 and 100 inclusive
// the result is 0

#include <iostream>

int main()
{

    int sum = 0;
    for (int i = -100; i <= 100; i++)
    {
        sum += i;
    }

    std::cout << "sum = " << sum << std::endl;

    return 0;
}
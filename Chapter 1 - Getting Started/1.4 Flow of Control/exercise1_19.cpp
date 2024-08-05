// Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that printed a range of numbers 
// so that it handles input in which the first number is smaller than the second.

#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    
    
    if (a < b)
    {
        // if a is smaller, print it and increase it until it matches b
        while (a <= b)
        {
            std::cout << a << " " << std::flush;
            a++;
        }
    }
    else
    {
        // same as above, only now we print the bigger number (b) and decrease it until it matches the smaller number (a)
        while (b <= a)
        {
            std::cout << b << " " << std::flush;
            b++;
        }
    }

    return 0;
}
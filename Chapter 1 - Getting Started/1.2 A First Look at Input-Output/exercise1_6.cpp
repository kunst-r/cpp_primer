// Explain whether the following program fragment is legal.
// std::cout << "The sum of " << v1;
//           << " and " << v2; 
//           << " is " << v1 + v2 << std::endl;
// If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?

// Answer: the program is illegal because of missing left-side operator on the 2nd and 3rd line.
// fixed program:

#include <iostream>

int main()
{
    int v1, v2;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;

    return 0;
}
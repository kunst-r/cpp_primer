// Our program used the addition operator, +, to add two numbers. 
// Write a program that uses the multiplication operator, *, to print the product instead.

#include <iostream>

int main()
{
    int v1, v2;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "Product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;

    return 0;
}
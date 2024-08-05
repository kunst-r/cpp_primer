// Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.

#include <iostream>

int main()
{
    // std::cin >> int input_value; // keyword cannot be provided as rvalue
    int input_value;
    std::cout << "Input a value" << std::endl;
    std::cin >> input_value;

    // int i = { 3.14 }; // error: narrowing conversion required
    int i = ( 3.14 );

    // double salary = wage = 9999.99; // wage isn't declared or defined
    double wage = 9999.99;
    double salary = wage;

    int i2 = 3.14; // truncation of double to int
    std::cout << "i = " << i;

    return 0;
}
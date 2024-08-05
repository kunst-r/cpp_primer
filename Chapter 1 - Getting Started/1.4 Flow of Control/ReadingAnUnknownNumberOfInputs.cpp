#include <iostream>

int main()
{
    int sum = 0;
    int value = 0;
    // read until end-of-file, calculating a running total of all values read
    // for Windows, EOF is Ctrl+Z or \0
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}
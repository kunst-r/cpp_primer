// What output will the following code produce?

#include <iostream>

int main()
{
    unsigned u = 10;
    unsigned u2 = 42;
    std::cout << u2 - u << std::endl; // 42-10 = 32 -> "32"
    std::cout << u - u2 << std::endl; // 10-42 = wrap-around -> UNSIGNED_INT_MAX_VALUE-32

    int i = 10;
    int i2 = 42;
    std::cout << i2 - i << std::endl; // 42-10 = 32 -> "32"
    std::cout << i - i2 << std::endl; // 10-42 = -32 -> "-32"

    std::cout << i - u << std::endl; // 10-10 = 0 -> "0"
    std::cout << u - i << std::endl; // 10-10 = 0 -> "0"

    return 0;
}
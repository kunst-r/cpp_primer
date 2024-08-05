//Is the following program legal? If so, what values are printed?

#include <iostream>

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i; // uses local i which is defined only inside the for loop
    
    std::cout << i << " " << sum << std::endl; // uses block scope i which is defined at the start of main()

    return 0;
}
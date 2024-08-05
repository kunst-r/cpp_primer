// What does the following program do?

#include <iostream>

int main()
{
    int i = 42; 
    int *p1 = &i; // creates a pointer p1 and stores memory address of i 
    *p1 = *p1 * *p1; // dereferences p1 (it changes the value of the variable it points to, e.g. i)
                     // and assigns it the value which is equal to sqare value of dereferenced p1
                     // same as i = i * i;

    // std::cout to check the results
    std::cout << *p1 << std::endl; // 1764 = 42 * 42

    return 0;
}
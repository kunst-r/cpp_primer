// Write a program that reads several transactions for the same ISBN.
// Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item_sum;
    Sales_item new_item;
    
    while (std::cin >> new_item)
    {
        item_sum += new_item;
    }
    
    std::cout << item_sum << std::endl;

    return 0;
}
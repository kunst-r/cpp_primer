#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1;
    Sales_item item2;

    std::cin >> item1 >> item2;

    // check that item1 and item2 represent the same book
    if (item1.isbn() == item2.isbn())
    {
        std::cout << item1 + item2 << std::endl;
    }
    else
    {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }

    return 0;
}
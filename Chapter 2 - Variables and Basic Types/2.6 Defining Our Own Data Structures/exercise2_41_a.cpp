// Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). 
// For now, you should define your Sales_data class in the same file as your main function.
// rewriting exercise 1.20

#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data;
    double price = 0;
    while (std::cin >> data.bookNo >> data.units_sold >> price)
    {
        data.revenue = data.units_sold * price;
        std::cout << data.bookNo << " " << data.units_sold << " " << data.revenue << " ";
        if (data.units_sold != 0)
        {
            std::cout << data.revenue/data.units_sold << std::endl;
        }
        else
        {
            std::cout << "(no sales)" << std::endl;
        }
    }

    return 0;
}
// Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). 
// For now, you should define your Sales_data class in the same file as your main function.
// rewriting exercise 1.22

#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data1, data2;
    double price = 0;
    if (std::cin >> data1.bookNo >> data1.units_sold >> price)
    {
        data1.revenue = data1.units_sold * price;
        
        while (std::cin >> data2.bookNo >> data2.units_sold >> price)
        {
            if (data1.bookNo == data2.bookNo)
            {
                data2.revenue = data2.units_sold * price;
                data1.units_sold += data2.units_sold;
                data1.revenue += data2.revenue;
            }
            else
            {
                std::cout << data1.bookNo << " " 
                      << data1.units_sold << " " 
                      << data1.revenue << " ";
                if (data1.units_sold > 0)
                {
                    std::cout << (data1.revenue/data1.units_sold) << std::endl;
                }
                else
                {
                    std::cout << "(no sales)" << std::endl;
                }

                return 0;
            }
        }
    }
    else // no transactions ocurred
    {
        std::cerr << "Transaction error" << std::endl;

        return -1;
    }

    return 0;
}
// Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). 
// For now, you should define your Sales_data class in the same file as your main function.
// rewriting exercise 1.25

#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data total;  // current book
    double price;

    if (std::cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = total.units_sold * price;
        Sales_data trans;

        while (std::cin >> trans.bookNo >> trans.units_sold >> price)
        {
            // if we're still processing the same book
            if (trans.bookNo == total.bookNo)
            {
                // update the current book total
                total.units_sold += trans.units_sold;
                total.revenue += trans.units_sold * price;
            }
            else // if we're processing a different book
            {
                // print the total for the current book and replace it with newly processed one
                std::cout << total.bookNo << " " 
                          << total.units_sold << " " 
                          << total.revenue << " " 
                          << total.revenue/total.units_sold << std::endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = total.units_sold * price;
            }
        }
        
        // print the last transaction
        std::cout << total.bookNo << " " 
                  << total.units_sold << " " 
                  << total.revenue << " " 
                  << total.revenue/total.units_sold << std::endl;
        }
    else
    {
        // no input, warn the user
        std::cerr << "No data!" << std::endl;
        return -1;
    }

    return 0;
}
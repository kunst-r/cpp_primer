#include <iostream>
#include "Sales_item.h"

int main()
{
    // variable to hold data for the next transaction
    Sales_item total; 

    // read the first transaction and ensure that there is data to process
    if (std::cin >> total)
    {
        // variable to hold the running sum
        Sales_item trans;

        // read and process the remaining transactions
        while (std::cin >> trans)
        {
            // if we're still processing the same book
            if (trans.isbn() == total.isbn())
            {
                // update the running total
                total += trans;
            }
            else
            {
                // print the results for the previous book
                std::cout << total << std::endl;
                // change the total to refer to the next book
                total = trans;
            }
        }

        // print the last transaction
        std::cout << total << std::endl;
    }
    else
    {
        // no input - warn the user
        std::cerr << "No data!" << std::endl;
        return -1;
    }

    return 0;
}
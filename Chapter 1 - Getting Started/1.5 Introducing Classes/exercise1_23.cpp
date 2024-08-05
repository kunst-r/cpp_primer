// Write a program that reads several transactions and counts how many transactions occur for each ISBN.

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item curr_item;
    Sales_item new_item;
    
    if (std::cin >> curr_item)
    {
        int cnt = 1;
        while(std::cin >> new_item)
        {
            if (curr_item.isbn() == new_item.isbn())
            {
                cnt++;
            }
            else
            {
                std::cout << "The transaction for book with ISBN " << curr_item.isbn() << " occurs " << cnt << " times." << std::endl;
                cnt = 1;
                curr_item = new_item; 
            }
        }

        std::cout << "The transaction for book with ISBN " << curr_item.isbn() << " occurs " << cnt << " times." << std::endl;
    }

    return 0;
}
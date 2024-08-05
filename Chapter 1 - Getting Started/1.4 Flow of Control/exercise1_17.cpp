// What happens in the program presented in this section if the input values are all equal? 
// What if there are no duplicated values?

// Answer: if all the input values are the same, the program will not print anything until we enter the '\0' (EOF)
// If there are no duplicated values, the program will print the output for every input

#include <iostream>

int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val) 
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }

        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }

    return 0;
}
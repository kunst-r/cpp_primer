#include <string>

// one way of defining struct and objects of that type
struct Sales_data 
{
    std::string bookNo; // default initialization
    unsigned units_sold = 0;
    double revenue = 0.0;
} accum, trans, *salesptr;

// another way
struct Sales_data 
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data accum, trans, *salesptr;
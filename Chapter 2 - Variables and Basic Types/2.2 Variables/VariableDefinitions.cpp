#include <string>

double applyDiscount(double price, double discount)
{
    return price * (1 - discount);
}

int main()
{
    int sum = 0, value, units_sold = 0; // sum, value and units_sold have type int
                                        // sum and units_sold have initial value 0
    std::string book("0-201-78345-X"); // book initialized from string literal

    
    
    // INITIALIZERS
    // ok: price is defined and initialized before it is used to initialize discount
    double price = 109.99, discount = price * 0.16;
    // ok: call applyDiscount and use the return value to inizialize salePrice
    double salePrice = applyDiscount(price, discount);

    
    
    // LIST INITIALIZATION
    int units_sold = 0;
    int units_sold = { 0 };
    int units_sold{ 0 };
    int units_sold(0);

    long double ld = 3.1415926536;
    int a{ld}, b = {ld}; // error: narrowing conversion required
    int c(ld), d = ld; // ok: but value will be truncated

    return 0;
}
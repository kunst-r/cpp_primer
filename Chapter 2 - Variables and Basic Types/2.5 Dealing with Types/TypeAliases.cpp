#include "Sales_item.h"


int main()
{
    {
        typedef double wages; // wages is a synonym for double
        typedef wages base, *p; // base is a synonym for double, p is a synonym for double*

        // alias declaration:
        using SI = Sales_item; // SI is a synonym for Sales_item

        wages hourly, weekly; // same as double hourly, weekly
        SI item; // same as Sales_item item;
    }



    // POINTERS, const ANS TYPE ALIASES
    {
        typedef char *pstring;
        const pstring cstr = 0; // cstr is a constant pointer to char
        const pstring *ps; // ps ia a pointer to a constant pointer to char
        const char *cstr = 0; // wrong interpretation of const pstring cstr
    }



    // THE auto TYPE SPECIFIER
    {
        // a variable that uses auto as its type specifier must have an initializer

        // the type of item is deducedfrom the type of the result of adding val1 and val2
        auto item = val1 + val2; // item initialized to the result of val1 + val2;

        auto i = 0, *p = &i; // ok: i is int and p is a pointer to int
        auto sz = 0, pi = 3.14; // error: incosistent types for sz and pi
    }



    // COMPOUND TYPES, const AND auto
    {
        int i = 0, &r = i;
        auto a = r; // a is an int (r is an alias for i, which has type int)

        // auto ignores top-level const while low-level const is kept
        const int ci = i, &cr = ci;
        auto b = ci; // b is an int (top-level const in ci is dropped)
        auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
        auto d = &i; // d is an int* (& of an int object is int*)
        auto e = &ci; // e is const int* (& of a const object is low-level const)

        // if we want the deduced type to have a top-level const, we must say so explicitly
        const auto f = ci; // deduced type of ci is int; f has type const int

        auto &g = ci; // g is a const int & that is bound to ci
        auto &h = 42; // error: we cannot bind a plain rederence to a literal
        const auto &j = 42; // ok: we can bind a const reference to a literal

        auto k = ci, &l = i; // k is int, l is int&
        auto &m = ci, *p = &ci; // m is a const int&; p is a pointer to const int
        auto &n = i, *p2 = &ci; // error: type deduced from i is int; type deduced from &ci is const int
    }

    return 0;
}
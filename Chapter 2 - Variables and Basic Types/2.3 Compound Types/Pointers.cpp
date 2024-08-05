#include <iostream>
#include <cstdlib>

int main()
{
    {
        int *ip1, *ip2; // both ip1 and ip2 are pointers to int
        double dp, *dp2; // dp2 is a pointer to double, dp is a double
    }



    // TAKING THE ADDRESS OF AN OBJECT
    {
        int ival = 42;
        int *p = &ival; // p holds the address of ival; p is a pointer to ival

        double dval;
        double *pd = &dval; // ok: initializer is the address of a double
        double *pd2 = pd; // ok: initialized is a pointer to double
        int *pi = pd; // error: types of pi and pf differ
        pi = &dval; // error: assigning the address of a double to a pointer to int
    }



    // USING A POINTER TO ACCESS AN OBJECT
    {
        int ival = 42;
        int *p = &ival; // p holds the address of ival; p is a pointer to ival
        std::cout << *p << std::endl; // * yields the object to which p points; prints 42

        *p = 0; // * yields the object; we assign a new value to ival through p
        std::cout << *p << std::endl; // prints 0
    }



    // NULL POINTERS
    {
        int *p1 = nullptr; // equivalent to int *p1 = 0;
        int *p2 = 0; // directly initializes p2 from the literal constant 0
        // must #include <cstdlib>
        int *p3 = NULL; // equivalent to int *p3 = 0;

        int zero = 0;
        pi = zero; // error: cannot assign an int to a pointer
    }



    // ASSIGNMENT AND POINTERS
    {
        int i = 42;
        int *pi = 0; // pi is initialized but adresses no object
        int *pi2 = &i; // p2 is initialized to hold the address of i
        int *pi3; // if pi3 is defined inside a block, pi3 is uninitialized
        pi3 = pi2; // pi3 and pi2 adress the same object, e.g. i
        pi2 = 0; // pi2 now adresses no object

        // changing the pointer value
        int ival = 42;
        pi = &ival; // value in pi is changed; pi now points to ival
        // changing the object pointer points to
        *pi = 0; // value in ival is changed, pi is unchanged
    }



    // OTHER POINTER OPERATIONS
    {
        int ival = 1024;
        int *pi = 0; // pi is a valid, null pointer
        int *pi2 = &ival; // pi2 is a valid pointer that holds the address of ival
        if (pi) // pi has value 0, so condition evaluates as false
        {
            // ...
        }
        if (pi2) // pi2 points to ival, so it is not 0; the condition evaluates as true
        {
            // ...
        }
    }



    // void* POINTERS
    {
        double obj = 3.14, *pd = &obj;
        // ok: void* can hold the address value of any data pointer type
        void *pv = &obj; // obj can be an object of any type
        pv = pd; // pv can hold a pointer to any type
    }



    return 0;
}
#include <iostream>

int main()
{
    {
        // i is an int; p is a pointer to int; r is a reference to int
        int i = 1024, *p = &i, &r = i;
    }



    // DEFINING MULTIPLE VARIABLES
    {
        int* p; // legal but might be misleading
        {
            int* p1, p2; // p1 is a pointer to int; p2 is an int
        }


        // first common style to define multiple variables
        {
            int *p1, *p2; // both p1 and p2 are pointers to int
        }

        // second style
        {
            int *p1; // p1 is a pointer to int
            int *p2; // p2 is a pointer to int
        }
    }



    // POINTERS TO POINTERS
    {
        int ival = 1024;
        int *pi = &ival; // pi points to an int
        int **ppi = &pi; // ppi points to a pointer to an int
        std::cout << "The value of ival\n"
                  << "direct value: " << ival << "\n"
                  << "indirect value: " << *pi << "\n"
                  << "doubly indirect value: " << **ppi << std::endl;
    }



    // REFERENCES TO POINTERS
    {
        int i = 42;
        int *p; // p is a pointer to int
        int *&r = p; // r is a reference to the pointer p
        
        r = &i; // r refers to a pointer; assigning &i to r makes p point to i
        *r = 0; // dereferencing r yields i, the object to which p points; changes i to 0
    }

    return 0;
}
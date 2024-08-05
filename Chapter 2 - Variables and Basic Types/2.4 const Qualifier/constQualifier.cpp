#include <iostream>

const int bufSize = 512;
int get_size()
{
    return bufSize;
}

int main()
{
    {
        const int bufSize = 512; // input buffer size, example of a variable whose value we know cannot be changed
        bufSize = 512; // error: attempt to weite to const object

        // const object has to be initialized
        const int i = get_size(); // ok: initialized at runtime
        const int j = 42; // ok: initialized at compile time
        const int k; // error: k is uninitialized const
    }



    // INITIALIZARION AND const
    {
        int i = 42;
        const int ci = i; // ok: the value in i is copied into ci
        int j = ci; // ok: the value in ci is copied into j
    }



    // BY DEFAULT, const OBJECTS ARE LOCAL TO A FILE
    {
        // file_1.cc defines and initializes a const that is accessible to other files
        extern const int bufSize = get_size();
        // file_1.h
        extern const int bufSize; // same bufSize as define in file_1.cc
    }

    return 0;
}
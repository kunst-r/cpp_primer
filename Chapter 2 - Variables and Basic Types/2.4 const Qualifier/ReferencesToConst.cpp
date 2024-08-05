int main()
{
    {
        const int ci = 1024;
        const int &r1 = ci; // ok: both reference and underlying object are const
        r1 = 42; // error: r1 is a reference to const
        int &r2 = ci; // error: non const reference to a const object
    }



    // INITIALIZATION AND REFERENCES TO const
    {
        int i = 42;
        const int &r1 = i; // we can bind a const int& to a plain int object
        const int &r2 = 42; // ok: r1 is a reference to const
        const int &r3 = r1 * 2; // ok: r3 is a reference to const
        int &r4 = r1 * 2; // error: r4 is a plain, non const reference

        double dval = 3.14;
        const int &ri = dval;
        // previous two lines are transformed to something like:
        {
            const int temp = dval; // create a temporary cosnt int from the double
            const int &ri = temp; // bind ri to that temporary
        }
    }



    // A REFERENCE TO const MAY REFER TO AN OBJECT THAT IS NOT const
    {
        int i = 42;
        int &r1 = i;        // r1 bound to i
        const int &r2 = i;  // r2 also bound to i, but cannot be used to change i
        r1 = 0;             // r1 is not const, i is now 0
        r2 = 0;             // error:: r2 is a reference to const
    }

    return 0;
}
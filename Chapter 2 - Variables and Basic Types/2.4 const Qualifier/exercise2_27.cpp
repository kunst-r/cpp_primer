// Which of the following initializations are legal? Explain why.

int main()
{
    { // a)
        int i = -1, &r = 0; // error: cannot assign a reference to a literal
    }

    { // b)
        int *const p2 = &i2; // if i2 is defined as int, this is ok - p2 is a const pointer to a non-const int
                             // if i2 is defined as const int, this is error because p2 has to point to a non-const int
    }

    { // c)
        const int i = -1, &r = 0; // ok: reference to const can point to a literal
    }

    { // d)
        int i2;
        const int *const p3 = &i2; // if i2 is defined, this is ok - p3 is a const pointer to (const or non-const) int
    }

    { // e)
        int i2;
        const int *p1 = &i2; // if i2 is defined as an int, this is ok
    }

    { // f)
        const int &const r2; // error: reference must be initialized
    }

    { // g)
        int i;
        const int i2 = i, &r = i; // this is ok if i is defined as (const or non-const) int
    }

    return 0;
}
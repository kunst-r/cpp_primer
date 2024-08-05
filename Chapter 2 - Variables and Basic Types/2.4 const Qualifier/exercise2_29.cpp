// Using the variables in the previous exercise, which of the following assignments are legal? Explain why.

int main()
{
    // variables from exercise 2.28 start
    int i, *const cp;
    int *p1, *const p2;
    const int ic, &r = ic;
    const int *const p3;
    const int *p;
    // variables from exercise 2.28 end

    i = ic; // ok: assigning value from ic to i
    p1 = p3; // error: p1 cannot point to const int
    p1 = &ic; // error: p1 cannot point to const int
    p3 = &ic; // error: cannot change value of *const (this would be ok if this were initialization of p3)
    p2 = p1; // error: cannot change value of *const (this would be ok if this were initialization of p2)
    ic = *p3; // cannot change value of const int (this would be ok if this were initialization of ic)

    return 0;
}
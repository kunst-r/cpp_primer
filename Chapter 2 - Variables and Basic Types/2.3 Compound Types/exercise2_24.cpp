// Why is the initialization of p legal but that of lp illegal?

int main()
{
    int i = 42;
    void *p = &i;
    long *lp = &i; // error: a value of int * cannot be used to initialize a long *
                   // this happens because the int and long types are not guaranteed 
                   // to have the same memory implementation

    return 0;
}
// Explain each of the following definitions. Indicate whether any are illegal and, if so, why.

int main()
{
    int i = 0;
    double *dp = &i; // error: pointer to double cannot point to integer
    int *ip = i; // error: cannot initialize int * using an int variable
    int *p = &i; // ok: initialize int pointer to hold the address of int i

    return 0;
}
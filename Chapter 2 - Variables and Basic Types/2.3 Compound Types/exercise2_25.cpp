// Determine the types and values of each of the following variables.

int main()
{
    {
        int* ip, i, &r = i; // ip is a pointer to int, i is an int, r is a reference to int
    }

    {
        int i, *ip = 0; // i is an int, ip is a pointer to int initialized to nullptr
    }

    {
        int* ip, ip2; // ip is a pointer to int, ip2 is an int
    }

    return 0;
}
// For each of the following declarations 
// indicate whether the object being declared has top-level or low-level const.

int main()
{
    const int v2 = 0; // v2 has top-level const
    int v1 = v2; // v1 is non-const
    int *p1 = &v1, &r1 = v1; // p1 has no const, r1 has no const
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2 has low-level const, p3 has top-level const, r2 has low-level const

    return 0;
}
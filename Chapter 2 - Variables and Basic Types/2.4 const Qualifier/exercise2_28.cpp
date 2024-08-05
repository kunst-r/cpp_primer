// Explain the following definitions. Identify any that are illegal.

int main()
{
    int i, *const cp; // error: const pointer cp must be initialized
    int *p1, *const p2; // error: const pointer p2 must be initialized
    const int ic, &r = ic; // error, const int ic must be initialized
    const int *const p3; // error: const pointer p3 must be initialized
    const int *p; // ok: p is a non-const pointer so it can be left uninitialized

    return 0;
}
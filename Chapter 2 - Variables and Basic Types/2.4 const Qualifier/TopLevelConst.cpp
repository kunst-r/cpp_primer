// top-level const -> indicates that the object itself is a const (i.e. pointer is a const pointer, int *const p)
// low-level const -> indicates that the base of a compound type is a const (i.e. pointer points to a const int)

int main()
{
    {
        int i = 0;
        int *const p1 = &i; // we cannot change the value of p1; const is top-level
        const int ci = 42; // we cannot change the value of ci; const is top-level
        const int *p2 = &ci; // we can change p2, but not ci through p2; const is low-level
        const int *const p3 = p2; // right-most const is top-level, left-most is low-level
        const int &r = ci; // const in reference types is always low-level

        // when we copy an object, top-level consts are ignored
        i = ci; // ok: copying the value of ci; top-level const in ci is ignored
        p2 = p3; // ok: pointed-to type matches; top-level const in p3 is ignored;

        // low-level const is never ignored
        int *p = p3; // error: p3 has a low-level const but p doesn't
        p2 = p3; // ok: p2 has the same low-level const qualification as p3
        p2 = &i; // ok: we can convert int* to const int*
        int &r1 = ci; // error: can't bind an ordinary int& to a const int object
        const int &r2 = i; // ok: can bind const int& to a plain int
    }

    return 0;
}
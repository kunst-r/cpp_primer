int get_size();
constexpr int size()
{
    return 0;
}

// used in "POINTERS AND constexpr" section
int j = 0;
constexpr int i = 42; // type of i is const int

int main()
{
    {
        const int max_files = 20; // max_files is a constant expression
        const int limit = max_files + 1; // limit is a constant expression
        int staff_size = 27; // staff_size is not a constant expression
        const int sz = get_size(); // sz is not a constant expression
    }



    // constexpr VARIABLES
    {
        constexpr int mf = 20; // 20 is a constexpr
        constexpr int limit = mf + 1; // mf + 1 is a constant expression
        constexpr int sz = size(); // ok only if size is a constexpr function
    }



    // LITERAL TYPES
    {
        // arithmetic, reference and pointer types
        // more about this in further chapters
    }



    // POINTERS AND constexpr
    {
        const int *p = nullptr;     // p is a pointer to a const int
        constexpr int *q = nullptr; // q is a const pointer to int
                                    // constexpr imposes a top-level const on the objects it defines

        constexpr int *np = nullptr; // np is a constant pointer to int that is null
        // i and j must be defined outside any function to be constexpr (here defined on lines 8 and 9)
        constexpr const int *p = &i; // p is a constant pointer to the const int i
        constexpr int *p1 = &j; // p1 is a constant pointer to the int j
    }

    return 0;
}
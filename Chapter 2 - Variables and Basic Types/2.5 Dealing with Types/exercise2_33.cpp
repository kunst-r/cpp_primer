// Using the variable definitions from "TypeAliases.cpp" section, 
// determine what happens in each of these assignments:

int main()
{
    // TypeAliases.cpp definitions start

    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)

    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i; // d is an int* (& of an int object is int*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)
    auto &g = ci; // g is a const int & that is bound to ci
    
    // TypeAliases.cpp definitions end

    // exercise2_33 start
    a = 42; // set int a to value 42
    b = 42; // set int b to value 42
    c = 42; // set int c to value 42
    d = 42; // error: set int* d to point to address 42
    e = 42; // error: trying to write to const int to which e points
    g = 42; // error: trying to write to const int to which g is bound
    
    
    return 0;
}
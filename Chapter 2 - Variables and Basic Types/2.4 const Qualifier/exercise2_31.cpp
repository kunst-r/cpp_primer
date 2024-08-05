// Given the declarations in the previous exercise 
// determine whether the following assignments are legal. 
// Explain how the top-level or low-level const applies in each case.

int main()
{
    int i;
    // exercise 2.30 declarations start
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    // exercise 2.30 declarations start end

    r1 = v2; // ok: conversion from int& to const int&
    p1 = p2; // error: p2 has low-level const but p1 doesn't
    p1 = p3; // error: p3 has low-level const but p1 doesn't
    p2 = p1; // ok: conversion from int* to const int*
    p2 = p3; // ok: p3 and p2 both have low-level const

    return 0;
}
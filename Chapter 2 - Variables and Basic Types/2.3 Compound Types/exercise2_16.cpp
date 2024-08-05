// Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159; // assigns 3.14159 to the object r2 is bind to, i.e. to d
    r2 = r1; // r2 bound object (d) is assigned the value of r1 bound object (i)
             // this line is the same as d = i
    i = r2; // assign value of variable r2 is bound to i (same as i = d)
    r1 = d; // assign value of d to variable r1 is bound to (same as i = d)

    return 0;
}
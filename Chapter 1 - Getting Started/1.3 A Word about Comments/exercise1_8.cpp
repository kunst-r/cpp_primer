// Indicate which, if any, of the following output statements are legal:
// After you’ve predicted what will happen, test your answers by compiling a program with each of these statements.
// Correct any errors you encounter.

#include <iostream>

int main()
{
    // correct
    std::cout << "/*";

    // correct
    std::cout << "*/";

    // error
    // std::cout << /* "*/" */;
    // fix
    std::cout << /* "*/" */";

    // correct
    std::cout << /* "*/" /* "/*" */;
}
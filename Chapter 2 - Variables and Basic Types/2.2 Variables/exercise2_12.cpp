// Which, if any, of the following names are invalid?

int double = 3.14; // error: keyword cannot be a variable name
int _; // ok: variable name begins with a letter or an underscore
int catch-22; // error: variable name can consist only of letters, digits and underscores (minus sign is not allowed)
int 1_or_2 = 1; // error: variable name cannot begin with a digit
double Double = 3.14; // ok: variable name can begin with a capital letter (but it is not conventional unless it is a class name)
// Explain whether each of the following is a declaration or a definition:

extern int ix = 1024; // definition (declaration + initializer -> definition)
                      // in a case of extern, initializer overrides the extern
int iy; // declaration and definition of iy (definition = creation of associated entity)
extern int iz; // declares, but does not define iz - iz is defined in another file
// Is the following code legal or not? If not, how might you make it legal?

int null = 0, *p = null; 

// based on the original intent, p has to be initialized either with:

// a) a literal 0 if the intent was to make it a nullptr:
int null = 0, *p = 0;

// or b), the adress of the object it points to:
int null = 0, *p = &null;
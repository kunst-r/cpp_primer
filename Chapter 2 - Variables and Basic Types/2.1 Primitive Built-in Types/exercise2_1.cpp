// What are the differences between int, long, long long, and short?
// - short is a short integer of minimum size 16 bits
// - int is an integer of minimum size of 16 bits and is at least as large as a short
// - long is an integer of minimum size of 32 bits and is at least as large as an int
// - long long is an integer of minimum size of 64 bits and is at least as large as a long


// Between an unsigned and a signed type? 
// - signed type is used to represent positive and negative values, usually values from -(2^n-1) to 2^n-1 where n is the number of bits
// - modern machines can often also represent the value -2^n
// - unsigned type is used to represent only positive numbers and zero
// - it is used when we know the variable won't be negative

// Between a float and a double?
// - float and double are both used to represent floating point values
// - however, float is single-precision and double is double-precision
// - that's why double is more precise and is more commonly used since the cost of double-precision calculations over single-precision ones is negligible

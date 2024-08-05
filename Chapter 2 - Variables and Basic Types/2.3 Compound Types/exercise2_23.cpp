// Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

// ANSWER: 

// We cannot determine if a pointer points to a valid object.
// There are a few possible scenarios:
// - pointer hasn't been initialized properly and holds a garbage value
// - object has been destroyed, but the pointer hasn't been uninitialized properly
// - we have a void* and don't know how it has been initialized
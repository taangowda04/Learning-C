# Application:
1. pointer arithm
2. structures
3. ARRAYS
4. FUNCTIONS
5. dma

# 💻 C Programming — Pointers Notes
1. Pointer: A pointer is a variable that stores the memory address of another variable.
2. Declaration: int *p;
3. Initialization: int a = 10; int *p = &a;
4. Address operator (&): Returns the memory address of a variable.
5. Dereference operator (*): Accesses the value stored at the address held by a pointer.
6. Access value: printf("%d", *p);
7. Access address: printf("%p", (void *)p);
8. Access variable address: printf("%p", (void *)&a);
9. Change value using pointer: *p = 20;
10. Pointer initialization: int *p = NULL;
11. NULL pointer: A pointer that does not point to a valid object.
12. Wild pointer: A pointer declared without initialization.
13. Dangling pointer: A pointer that refers to memory that is no longer valid.
14. Void pointer: A generic pointer that can hold the address of any object type (void *p).
15. Null pointer constant: NULL represents a null pointer.
16. Pointer arithmetic: Adding or subtracting an integer moves a pointer by multiples of the pointed-to type’s size.
17. Increment pointer: p++ moves the pointer to the next element of its type.
18. Decrement pointer: p-- moves the pointer to the previous element of its type.
19. Pointer addition: Adding two pointers is not allowed in C.
20. Pointer subtraction: Subtracting pointers to elements of the same array gives the number of elements between them.
21. Pointer comparison: Pointers can be compared using relational and equality operators, subject to C’s pointer-comparison rules.
22. Pointer to integer: int *p = &a;
23. Pointer to character: char *p = &ch;
24. Pointer to float: float *p = &f;
25. Pointer to pointer: A pointer that stores the address of another pointer (int **p).
26. Access pointer to pointer: **p accesses the original value.
27. Array name: An array name usually converts to a pointer to its first element in expressions.
28. First array element: *arr accesses the first element of an array.
29. Array using pointer: *(arr + i) accesses the element at index i.
30. Pointer using array: p[i] accesses the element at index i when p points to a suitable array element.
31. Pointer and array difference: An array is a collection of elements, whereas a pointer is a variable that stores an address.
32. Pointer to array: A pointer that points to an entire array (int (*p)[5]).
33. Array of pointers: An array whose elements are pointers (int *p[5]).
34. Function pointer: A pointer that stores the address of a function.
35. Function pointer declaration: int (*p)(int, int);
36. Pointer as function argument: Passing a pointer allows a function to access or modify the pointed-to object.
37. Call by value: C passes function arguments by value, including pointer arguments.
38. Modify original variable: Pass its address to a function and modify the pointed-to value.
39. Dynamic memory allocation: Allocating memory at runtime using functions such as malloc(), calloc(), and realloc().
40. malloc(): Allocates a specified number of bytes without initializing them.
41. calloc(): Allocates memory for multiple elements and initializes all allocated bytes to zero.
42. realloc(): Changes the size of a previously allocated memory block.
43. free(): Releases dynamically allocated memory.
44. sizeof(pointer): Returns the size of the pointer variable itself.
45. Pointer size: Depends on the system and implementation, not necessarily on the pointed-to type.
46. Uninitialized pointer: Must not be dereferenced because it does not have a valid initialized target.
47. Pointer dereferencing: Dereference a pointer only when it points to a valid object of the appropriate type.
48. Const pointer: int *const p = &a; means the pointer cannot be reassigned.
49. Pointer to constant: const int *p = &a; means the value cannot be modified through p.
50. Constant pointer to constant: const int *const p = &a; means neither the pointer nor the value can be changed through p.
51. Structure pointer: A pointer to a structure accesses its members using the -> operator.
52. Structure member access: p->age is equivalent to (*p).age.
53. Pointer type casting: Converts a pointer expression to another pointer type when permitted, but does not automatically make dereferencing safe.
54. Generic pointer: A void * can hold an object pointer and must be converted to an appropriate object-pointer type before dereferencing in C.
55. Pointer and strings: A character pointer can point to a string’s first character.
56. String literal: A string literal must not be modified; modifying it causes undefined behavior.
57. Memory leak: Occurs when dynamically allocated memory is no longer accessible but has not been freed.
58. Segmentation fault: A common runtime error caused by invalid memory access, though not every invalid access produces one.
59. Pointer reassignment: p = &b; makes p point to b instead of its previous target.
60. Pointer copying: q = p; copies the address stored in p into q.


# DYNAMIC MEMORY ALLOCATION
- ALLOCATION OF MEMORY DURING runtime
- functions
1. malloc()
- garbage value 
- 
2. callloc()
- contigious allocation
- num of elements, size as parameters
- stores zero
3. realloc()
- reallocate/resize memeory
- existing pointer and size as parameters
4. free()
- 
# session1
- 7 programs
# session2
- 7 programs
# session 3
- programs
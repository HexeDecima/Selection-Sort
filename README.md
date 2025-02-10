Selection sort algorithm, written from scratch in C. Using recursion and swap without a temp variable.
The swap algorithm:
```
    a = a + b; // The sum will be the same in both cases, so we use it instead of a temp variable.
    printf("a as a sum: \n", a);
    b = a - b; // b now has the original value of a.
    printf("b with value of a: \n", b);
    a = a - b; // The sum minus the new value of b.
```
Compile with GCC:
```
gcc -g -O0 selection_sort.c -o selection sort
```
Compile with clang:
```
clang -g -O0 selection_sort.c -o selection sort
```
where `-g` is for debugging and `-O0` is for no optimization.

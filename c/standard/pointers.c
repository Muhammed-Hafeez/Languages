#include <stdio.h>
int main()
{
    // 1] pointer
    int i = 100;
    int *p = &i;
    printf("pointer points to address of integer %d the address is %p\n", i, p);
    printf("the address of %d is %p\n", i, &i);
    printf("de-referencing the address %p value:%d\n", p, *p);

    // 2] pointer arithematic
    int arr[3] = {0, 100, 200};
    int *ptr = arr;
    printf("printing the arr by position and pointer iteration : ");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        int elementByposition = arr[i];
        int elementByIteration = *ptr;
        printf("%d %d ", elementByposition, elementByIteration);
        ptr++;
    }
    printf("\n");

    // 3] NULL Pointer
    int *nullPtr = NULL; // Pointer that doesn't point to any valid address
    printf("\nNULL Pointer:\n");
    if (nullPtr == NULL)
    {
        printf("nullPtr is a NULL pointer.\n");
    }

    // 4] Pointer to Pointer
    int **pp = &p; // Pointer to pointer, stores address of p
    printf("\nPointer to Pointer:\n");
    printf("Address of p: %p\n", pp);
    printf("Value of a via pointer to pointer pp: %d\n", **pp); // Double dereferencing

    // 5. Array and Pointers
    printf("\nArray and Pointers:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d] = %d, accessed via pointer: %d\n", i, arr[i], *(arr + i));
    }

    // 6] pointer and functions
    printf("pointer and functions\n");
    void increment(int *num);
    int integer = 10;
    increment(&integer);
    printf("the value of integer is changed %d\n", integer);
    return 0;
}

void increment(int *num)
{
    (*num)++;
}

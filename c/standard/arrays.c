#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory allocation

int main()
{
    // 1. Static Array
    int staticArr[5] = {1, 2, 3, 4, 5}; // Size is fixed at compile-time
    printf("Static Array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", staticArr[i]);
    }
    printf("\n");

    // 2. Dynamic Array
    int size = 5;
    int *dynamicArr = (int *)malloc(size * sizeof(int)); // Memory allocated at runtime
    if (dynamicArr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit if allocation fails
    }
    // Initializing the dynamic array
    for (int i = 0; i < size; i++)
    {
        dynamicArr[i] = i + 1;
    }
    printf("Dynamic Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", dynamicArr[i]);
    }
    printf("\n");
    free(dynamicArr); // Free the allocated memory

    // 3. Variable-Length Array (VLA) - Available in C99 and later
    printf("Enter the size of the VLA: ");
    int vlaSize;
    scanf("%d", &vlaSize);
    int vla[vlaSize]; // Size is determined at runtime
    // Initializing the VLA
    for (int i = 0; i < vlaSize; i++)
    {
        vla[i] = i + 1;
    }
    printf("Variable-Length Array:\n");
    for (int i = 0; i < vlaSize; i++)
    {
        printf("%d ", vla[i]);
    }
    printf("\n");

    return 0;
}

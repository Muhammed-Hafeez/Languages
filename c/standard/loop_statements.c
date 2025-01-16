#include <stdio.h>

int main()
{
    // 1. for loop
    printf("For loop example:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Iteration %d\n", i);
    }

    // 2. while loop
    printf("\nWhile loop example:\n");
    int j = 1;
    while (j <= 5)
    {
        printf("Iteration %d\n", j);
        j++;
    }

    // 3. do-while loop
    printf("\nDo-while loop example:\n");
    int k = 1;
    do
    {
        printf("Iteration %d\n", k);
        k++;
    } while (k <= 5);

    return 0;
}

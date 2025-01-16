#include <stdio.h>

int main()
{
    int number = 5;

    // 1. if statement
    if (number > 0)
    {
        printf("The number is positive.\n");
    }

    // 2. if-else statement
    if (number % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    // 3. if-else if-else ladder
    int age = 20;
    if (age < 18)
    {
        printf("Underage\n");
    }
    else if (age >= 18 && age < 21)
    {
        printf("Adult, but not of legal drinking age.\n");
    }
    else
    {
        printf("Adult of legal drinking age.\n");
    }

    // 4. switch-case statement
    int grade = 3;
    printf("\nGrade: ");
    switch (grade)
    {
    case 1:
        printf("First grade\n");
        break;
    case 2:
        printf("Second grade\n");
        break;
    case 3:
        printf("Third grade\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }

    // 5. break statement in switch
    // Already demonstrated above: The break prevents fall-through to the next case.

    // 6. goto statement
    int flag = 1;
    if (flag == 1)
    {
        goto jump; // directly jumps to label "jump"
    }
    printf("This line will be skipped due to goto.\n");

jump:
    printf("We jumped here using goto.\n");

    // 7. return statement
    printf("Returning from main function.\n");
    return 0; // Terminates the function
}

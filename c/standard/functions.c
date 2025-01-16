#include <stdio.h>

// Function declaration
int add(int x, int y); // Regular function for addition
int factorial(int n);  // Recursive function for factorial

int main()
{
    int num1 = 5, num2 = 10;

    // Calling the add function
    int sum = add(num1, num2);
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    int factNum = 10;

    // Calling the factorial function
    int fact = factorial(factNum);
    printf("Factorial of %d is %d\n", factNum, fact);

    return 0;
}

// Function definition for addition (regular function)
int add(int x, int y)
{
    return x + y; // Returns the sum of two numbers
}

// Recursive function definition for factorial
int factorial(int n)
{
    if (n==0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}

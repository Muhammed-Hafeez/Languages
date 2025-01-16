#include <stdio.h>

int main()
{
    // Arithmetic Operators
    int a = 10, b = 3;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    int x = 1, y = 0;
    printf("\nLogical Operators:\n");
    printf("x && y: %d\n", x && y);
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    int c = 10;
    printf("c = %d\n", c);
    c += 2;
    printf("c += 2: %d\n", c);
    c -= 2;
    printf("c -= 2: %d\n", c);
    c *= 2;
    printf("c *= 2: %d\n", c);
    c /= 2;
    printf("c /= 2: %d\n", c);
    c %= 3;
    printf("c %%= 3: %d\n", c);

    // Increment and Decrement Operators
    printf("\nIncrement and Decrement Operators:\n");
    int d = 5;
    printf("d = %d\n", d);
    printf("d++: %d\n", d++); // post-increment
    printf("++d: %d\n", ++d); // pre-increment
    printf("d--: %d\n", d--); // post-decrement
    printf("--d: %d\n", --d); // pre-decrement

    // Conditional (Ternary) Operator
    printf("\nConditional (Ternary) Operator:\n");
    int max = (a > b) ? a : b;
    printf("max of a and b is: %d\n", max);

    // Sizeof Operator
    printf("\nSizeof Operator:\n");
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));

    return 0;
}

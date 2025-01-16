#include <stdio.h>
int main()
{
    // integer dataType
    int a = 100;
    int b = -1;
    int c = 89U;
    long int d = 99998L;
    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %u\n",
           c);
    printf("Integer value with an long int data: %ld\n", d);

    // character || char dataType
    char cA = 'a';
    printf("this is character %c \n",cA);
    cA++; // now it is b
    printf("now it is: %c\n", cA);
   
   // float and double dataType
    float fA = 2312312312.123123;
    printf("this is floating point number but it does not show exact value %f\n", fA);
    double dA = 2312312312.123123;
    printf("this is floating point number but it shows exact value %f\n", dA);
    return 0;
}
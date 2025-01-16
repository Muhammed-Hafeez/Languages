#include <stdio.h>
#include <string.h>

int main()
{
    // 1. String Declaration and Initialization
    char str1[20] = "Hello"; // Static initialization
    char str2[] = "World";   // Automatic size allocation

    // 2. String Length
    printf("Length of str1: %lu\n", strlen(str1)); // Returns the length of str1 (excluding '\0')

    // 3. String Copy
    char str3[20];
    strcpy(str3, str1); // Copies str1 to str3
    printf("Copied string: %s\n", str3);

    // 4. String Concatenation
    strcat(str1, " ");  // Adding a space to str1
    strcat(str1, str2); // Concatenates str2 to str1
    printf("Concatenated string: %s\n", str1);

    // 5. String Comparison
    int result = strcmp(str1, str3); // Compare str1 and str3
    if (result == 0)
    {
        printf("str1 and str3 are equal.\n");
    }
    else if (result < 0)
    {
        printf("str1 is less than str3.\n");
    }
    else
    {
        printf("str1 is greater than str3.\n");
    }

    // 6. String Search
    char *found = strchr(str1, 'o'); // Search for character 'o' in str1
    if (found)
    {
        printf("Character 'o' found at position: %ld\n", found - str1);
    }
    else
    {
        printf("Character 'o' not found in str1.\n");
    }

    // 7. String Tokenization
    char str4[] = "Hello, how are you?";
    char *token = strtok(str4, " ,?"); // Tokenize based on space, comma, and question mark
    printf("Tokens:\n");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ,?");
    }

    // 8. String Case Conversion
    char str5[] = "Hello World";
    for (int i = 0; str5[i]; i++)
    {
        if (str5[i] >= 'a' && str5[i] <= 'z')
        {
            str5[i] -= 32; // Convert lowercase to uppercase
        }
    }
    printf("Uppercase string: %s\n", str5);

    return 0;
}

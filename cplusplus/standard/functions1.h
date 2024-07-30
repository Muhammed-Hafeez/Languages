#include <string>
#include <iostream>
#include <malloc.h>
using namespace std;
void strcpy(string str, char *cpstr, int start, int end)
{
    int i = start, cpyI = 0;
    while (i <= end)
    {
        *cpstr = str[i];
        i++;
        cpstr++;
    }
    *cpstr = '\0';
}
char *slice(string str, int start, int end)
{
    int size = (end - start)+1;
    char *newstr = (char *)calloc(size , sizeof(char));
    strcpy(str, newstr, start, end);
    return newstr;
}
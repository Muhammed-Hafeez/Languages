#include <iostream>
#include "./functions1.h"
using namespace std;
int main()
{
    string name = "hafeez";
    int size = name.length();
    char *newstr = slice(name, 3, 5);
    cout << newstr << endl;
    return 0;
}
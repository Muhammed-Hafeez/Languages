#include <iostream>
using namespace std;
int main()
{
    /*Constants are unchangeable; when a constant variable is initialized in a
     program, its value cannot be changed afterwards.*/
    const int a = 100;
    cout << "const a is" << a << endl;
    // a = 10; throws an error;
    return 0;
}
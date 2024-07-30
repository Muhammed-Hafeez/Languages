#include <iostream>
using namespace std;
int a = 20; // global varaible;
int Num(){
    return a;
}
int main()
{
    int a = 55; // local variable
    cout << a << endl;
    cout << Num() <<endl;
    return 0;
}
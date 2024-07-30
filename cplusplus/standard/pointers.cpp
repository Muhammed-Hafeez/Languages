#include<iostream>
using namespace std;
int main(){
//& operator for addresses
int a = 100;
cout << "a's address " << &a << endl;
//*(asterisk) operator used as pointers which stores addresses
int *_a = &a;//value must be a address
cout << "a's address again which is stored in _a " << _a << endl;
//dereference the address by asterisk operator
cout << "_a's dereference " << *_a << " or " << *(&a) << endl;
//pointer's pointer
int **__a = &_a;
cout << "_a pointers address " << __a << " and its value " << **__a << endl;
// pointers in arrays
int marks[] = {99, 100, 38};
int *p = marks;
cout << "The value of marks[0] is " << *p << endl;
cout << "The value of marks[1] is " << *(p + 1) << endl;
cout << "The value of marks[2] is " << *(p + 2) << endl;
return 0;
}
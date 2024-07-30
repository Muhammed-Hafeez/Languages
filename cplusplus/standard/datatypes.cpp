#include<iostream>
using namespace std;
/*
Data types define the type of data a variable can hold; for example, an integer variable can hold integer data, a character can hold character data, etc.

Data types in C++ are categorized into three groups:

Built-in data types
These data types are pre-defined for a language and could be used directly by the programmer.

Examples are: Int, Float, Char, Double, Boolean

User-defined data types
These data types are defined by the user itself.

Examples are: Class, Struct, Union, Enum

Derived data types
These data types are derived from the primitive built-in data types.

Examples are: Array, Pointer, Function
*/
int main(){
//built in data types
int a = 20;
bool b = true; // or false
char c = 'A';
double d = 20.5;
float f = 20.2;
cout << "data a " << a << endl;
cout << "data b " << b << endl;
cout << "data c " << c << endl;
cout << "data d " << d << endl;
cout << "data f " << f << endl;
return 0;
}
#include <iostream>
using namespace std;
int main()
{
    /*
    types:
    Arithemetic operators
    relational operators
    logical operators
    bitwise operators
    Assignment operators
    */
    int a = 10, b = 1;
    // Arithemetic operators
    cout << "a + b =" << a + b << endl;
    cout << "a - b =" << a - b << endl;
    cout << "a / b =" << a / b << endl;
    cout << "a * b =" << a * b << endl;
    cout << "a % b =" << a % b << endl;
    cout << "a++ =" << a++ << endl; // 11
    cout << "++a =" << ++a << endl; // 12
    cout << "b-- =" << b-- << endl; // 0
    cout << "--b =" << --b << endl; //-1
    // relational operators
    cout << "a > b =" << (a > b) << endl;
    cout << "a < b =" << (a < b) << endl;
    cout << "a >= b =" << (a >= b) << endl;
    cout << "a <=  b =" << (a <= b) << endl;
    cout << "a ==  b =" << (a == b) << endl;
    cout << "a !=  b =" << (a != b) << endl;
    // logical operators
    cout << "0 && 1 : " << (0 && 1) << endl;
    cout << "0 || 1 : " << (0 || 1) << endl;
    cout << "!0 : " << (!0) << endl;
    // assignment operators
    a = 10;
    b = 1;
    // bitwise operators
    cout << "AND 1&0 : " << (1 & 0) << endl;
    cout << "OR 1|0 : " << (1 | 0) << endl;
    cout << "NOT !1 : " << (!1) << endl;
    cout << "XOR 1^0 : " << (1 ^ 0) << endl;
    cout << "rshift 2>>1 : " << (2 >> 1) << endl;
    cout << "lshift 2 << 1 : " << (2 << 1) << endl;
    cout << "compliment ~1 : " << (~1) << endl;

    return 0;
}
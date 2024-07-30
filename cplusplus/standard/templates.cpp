#include <iostream>
using namespace std;
/*
Templates in C++ are a powerful feature used for generic programming. This means you can write code that works with different data types without having to rewrite it for each type. */
template <class t1>
class Vector
{
public:
    t1 *arr;
    t1 size;
    void display()
    {
        cout << "hello" << endl;
    }
};
int main()
{
    Vector<int> v1;
    Vector<char> v2;
    v1.display();
    v2.display();
    return 0;
}
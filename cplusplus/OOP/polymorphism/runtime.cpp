#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "this is base class" << endl;
    }
};
class Derived : public Base
{
public:
    void display() override
    {
        cout << "this is derived class" << endl;
    }
};
int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->display();//runtime polymorphism

    return 0;
}
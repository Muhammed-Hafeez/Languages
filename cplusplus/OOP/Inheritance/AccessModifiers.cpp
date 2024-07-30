#include <iostream>
using namespace std;
class Access
{
private:
    void p1()
    {
        cout << "cannot be accessed" << endl;
    }

protected:
    void p2()
    {
        cout << "can be accessed inside derived class" << endl;
    }

public:
    void p3()
    {
        cout << "can be accessed from anywhere" << endl;
    }
};
class Child : public Access
{
public:
    void get()
    {
        // p1(); access denied
        p2(); // granted
    }
};
int main()
{
    Child c1;
    c1.get();
    c1.p3();
    // c1.p2(); //access denied
    return 0;
}
#include <iostream>
using namespace std;
class Print
{
public:
    void show(int a)
    {
        cout << "int " << a << endl;
    }
    void show(char a)
    {
        cout << "char " << a << endl;
    }
    void show(double a)
    {
        cout << "double " << a << endl;
    }
};
int main()
{
    Print log;
    log.show(20);
    log.show('A');
    log.show(12.22);
    return 0;
}
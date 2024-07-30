#include <iostream>
using namespace std;

union datas
{
    int rice;
    char car;
    float pounds;
};
int main()
{
     datas m1;
    m1.pounds = 20.44;
    // m1.car = 'b';
    // m1.rice = 200;
    cout << m1.pounds << endl;
    // cout << m1.car << endl;//we can only use one variable at a time
    // cout << m1.rice << endl;
    return 0;
};
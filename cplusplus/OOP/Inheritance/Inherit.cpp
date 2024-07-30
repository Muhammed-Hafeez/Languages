#include <iostream>
using namespace std;
class Calculator
{
public:
    int *a, size;
    void Calc(int a[], int size)
    {
        this->a = a;
        this->size = size;
    }
};
class Add : public Calculator
{
public:
    int add()
    {
        int ans = 0;
        for (int i = 0; i < this->size; i++)
        {
            ans += this->a[i];
        }
        return ans;
    }
};
class Subtract : public Calculator
{
public:
    int sub()
    {
        int ans = this->a[0];
        for (int i = 1; i < this->size; i++)
        {
            ans -= this->a[i];
        }
        return ans;
    }
};
class Multiply : public Calculator
{
public:
    int mul()
    {
        int ans = this->a[0];
        for (int i = 1; i < this->size; i++)
        {
            ans *= this->a[i];
        }
        return ans;
    }
};
class Divide : public Calculator
{
public:
    int div()
    {
        int ans = this->a[0];
        for (int i = 1; i < this->size; i++)
        {
            ans /= this->a[i];
        }
        return ans;
    }
};
int main()
{
    int arr[] = {10, 10};
    int size = sizeof(arr) / sizeof(int);
    Add adding;
    Subtract sub;
    Multiply mul;
    Divide div;
    adding.Calc(arr, size);
    sub.Calc(arr, size);
    mul.Calc(arr, size);
    div.Calc(arr, size);
    cout << "addition: " << adding.add() << endl;
    cout << "subtract: " << sub.sub() << endl;
    cout << "multiply: " << mul.mul() << endl;
    cout << "divide: " << div.div() << endl;
    return 0;
}
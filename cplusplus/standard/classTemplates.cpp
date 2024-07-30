#include <iostream>
using namespace std;
template <class t1 = int, class t2 = char, class t3 = float>
class Example
{
private:
    t2 name;
    t1 price;
    t3 ratings;

public:
    Example(t1 price, t2 name, t3 rating)
    {
        this->name = name;
        this->price = price;
        this->ratings = rating;
    };
    void display()
    {
        cout
            << endl
            << "=================================================================="
            << endl
            << "price: " << price << endl
            << "name: " << name << endl
            << "ratings: " << ratings << endl
            << "=================================================================="
            << endl;
    }
};
int main()
{
    Example<int, string> e1(500, "BMW", 4.9);
    e1.display();
    return 0;
}
#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    Employee(string name, int id)
    {
        this->id = id;
        this->name = name;
    }
    Employee * getEmployee()
    {
        cout << "Employee " << name << " with id: " << id << endl;
        return this;
    }
};
int main()
{
    Employee emp1("hasbulla", 2501);
    Employee * catchEmp = emp1.getEmployee();
    cout << "go " << catchEmp->name << endl;
    return 0;
}
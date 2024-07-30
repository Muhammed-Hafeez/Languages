#include <iostream>
using namespace std;
class Employee
{
public:
    static int CountLoggedInMembers; // returns number of employees
    void login(string name, int id)
    {
        cout << name
             << " Logged in emp_Id: "
             << id << " with "
             << CountLoggedInMembers
             << " Members"
             << endl;
        CountLoggedInMembers++;
    }
};
int Employee::CountLoggedInMembers = 0;

int main()
{
    Employee hafeez,rehman,farhan,manish;
    hafeez.login("hafeez", 2401);
    rehman.login("rehman", 2403);
    farhan.login("farhan", 2404);
    manish.login("manish", 2405);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // if else if statement
    int age;
    cout << "Enter your age ";
    cin >> age;
    if (age >= 18 && age <= 40)
    {
        cout << "from asian parent you are adult now get a job" << endl;
    }
    else if (age < 18 && age > -1)
    {
        cout << "from asian parent you kid go take a degree" << endl;
    }
    else
    {
        cout << "who are you??" << endl;
    }
    // switch case
    switch (age)
    {
    case 0 ... 17:
        cout << "you are a kid" << endl;
        break;
    case 18 ... 60:
        cout << "you are a adult" << endl;
        break;
    case 61 ... 100:
        cout << "you are a grandpa" << endl;
        break;
    default:
        cout << "not humen" << endl;
    }

    return 0;
}
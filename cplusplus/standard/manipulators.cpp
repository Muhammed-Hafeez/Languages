#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    /*
    In C++ programming, language manipulators are used in the formatting of
    output. These are helpful in modifying the input and the output stream. They
    make use of the insertion and extraction operators to modify the output.
    Here’s a list of a few manipulators:
     */

    int num = 100;
    float b = 3.14;
    cout << " endl for new line" << endl;
    cout << (setw(20)) << " for width" << endl;
    cout << setprecision(20) <<b<< " used for precised floating points" << endl;
    cout << setbase(8) << num << " sets base to 16 "<<endl; // sets base to 16
    return 0;
}
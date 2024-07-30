#include <iostream>
using namespace std;
int main()
{
    int iter = 0, N = 12;
    // for loop
    for (int i = 1; i <= N; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    // while loop
    while (iter < 12)
    {
        cout << iter + 1 << " ";
        iter++;
    }
    cout << endl;
    // do while loop
    do
    {
        cout << iter << " ";
        iter--;
    } while (iter > 0);
    cout << endl;

    return 0;
}
#include <iostream>
#include "C:/Hafeez/Learning/Languages/cplusplus/header/print.hpp"
#include <vector>
using namespace std;
int main()
{
    Utils u;
    int arr[] = {1, 2, 3, 4};
    vector<int> v = {2, 1, 3, 4, 5};
    u.printArr<int *>(arr, 4);
    u.printArr<vector<int>>(v, v.size());
    return 0;
}
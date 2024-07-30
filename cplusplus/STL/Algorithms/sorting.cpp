#include <iostream>
#include <algorithm>
#include <vector>
#include <c:/Hafeez/Learning/Languages/cplusplus/header/print.hpp>
using namespace std;
int main()
{

    vector<int> vec = {7, 0, 1, 9};
    //sort
    sort(vec.begin(),vec.end());
    Utils console;
    console.printArr<vector<int>>(vec,vec.size());
    //partial_sort
    vec = {5, 3, 4, 1, 2};
    std::partial_sort(vec.begin(), vec.begin() + 3, vec.end());
    console.printArr<vector<int>>(vec, vec.size());
    //nth_element
    vec = {5, 3, 4, 1, 2};
    std::nth_element(vec.begin(), vec.begin() + 2, vec.end());
    std::cout << "Vector with nth element in place: ";
    console.printArr<vector<int>>(vec, vec.size());
    return 0;
}
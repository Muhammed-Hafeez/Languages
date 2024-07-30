#include <iostream>
#include <vector>
#include <algorithm>
#include <c:/Hafeez/Learning/Languages/cplusplus/header/print.hpp>
using namespace std;

int main()
{

    Utils console;
    vector<int> vec = {1, 2, 3, 4, 5};
    // find method Find the first occurrence of a value in a sequence.
    auto FindInVec = find(vec.begin(), vec.end(), 3);
    cout << "vector: ";
    console.printArr<vector<int>>(vec, vec.size());
    cout << "founded at: "
         << distance(vec.begin(), FindInVec) // A generalization of pointer arithmetic.
         << endl;
    //binary search
    bool binarySearch = binary_search(vec.begin(), vec.end(), 10);
    binarySearch ? cout << "found element" << endl : cout << "not found" << endl;
    //search method
    std::vector<int> sub = {1,2};
    auto it = std::search(vec.begin(), vec.end(), sub.begin(), sub.end());
    if (it != vec.end())
    {
        std::cout << "Subsequence found starting at position: " << std::distance(vec.begin(), it) << std::endl;
    }
    else
    {
        std::cout << "Subsequence not found" << std::endl;
    }
    return 0;
}
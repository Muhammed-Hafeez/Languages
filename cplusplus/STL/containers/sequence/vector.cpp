#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Vector: A dynamic array that allows fast random access and can grow in size.
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector: ";
    for (int v : vec)
        std::cout << v << " ";
    std::cout << std::endl;
    // Methods
    vec.push_back(6); // Add an element at the end
    vec.pop_back();   // Remove the last element
    vec.size();       // Get the number of elements
    vec.empty();      // Check if the vector is empty
    vec.clear();      // Remove all elements

    return 0;
}
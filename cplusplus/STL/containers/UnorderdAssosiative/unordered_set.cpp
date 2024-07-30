#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    // Unordered Set: A collection of unique elements with no particular order, using hash tables.
    std::unordered_set<int> us = {1, 2, 3, 4, 5};

    // Methods
    us.insert(6); // Add an element
    us.erase(3);  // Remove an element
    std::cout << "Unordered Set: ";
    for (int i : us)
        std::cout << i << " ";
    std::cout << std::endl;
    us.size();    // Get the number of elements
    us.empty();   // Check if the unordered set is empty
    us.clear();   // Remove all elements
    return 0;
}
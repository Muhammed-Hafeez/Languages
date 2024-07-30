#include <iostream>
#include <unordered_map>
using namespace std;
// Unordered Map : A collection of key - value pairs with no particular order, using hash tables.
int main()
{
    unordered_map<int, string> m = {{1, "one"}, {3, "three"}, {2, "two"}};
    m.insert({5, "five"});
    m.insert({4, "four"});

    for (auto &i : m)
    {
        cout << "{" << i.first << ":" << i.second << "} ";
    }
    cout << endl;
    // Methods
    m[6] = "four"; // Insert element with key 4
    m.erase(2);    // Remove element with key 2
    m.size();      // Get the number of elements
    m.empty();     // Check if the unordered map is empty
    m.clear();     // Remove all elements
    return 0;
}
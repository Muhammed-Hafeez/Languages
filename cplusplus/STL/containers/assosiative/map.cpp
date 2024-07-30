#include <iostream>
#include <map>
using namespace std;
void printMap(const auto m, int size)
{
    std::cout << "Map: ";
    for (auto &pair : m)
        std::cout << "{" << pair.first << ", " << pair.second << "} ";
    std::cout << std::endl;
}
using namespace std;
int main()
{
    // Map: A collection of key-value pairs, sorted by the key.
    map<int, string> m = {{1, "one"}, {2, "string"}, {3, "three"}};
    printMap(m, m.size());
    m.insert({5, "five"});
    m[4] = "four"; // Insert element with key 4
    printMap(m, m.size());
    m.erase(2); // Remove element with key 2
    printMap(m, m.size());
    m.size();  // Get the number of elements
    m.empty(); // Check if the map is empty
    m.clear(); // Remove all elements
    return 0;
    // while multimap allows to have multiple same key elements in a map
  
}
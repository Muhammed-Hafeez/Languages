#include <iostream>
#include <set>
using namespace std;
template <class T1>

void print(T1 s)
{
    for (int i : s)
        cout << i << " ";
    cout << endl;
}
int main()
{
    // Set: A collection of unique elements, sorted by the element value.

    set<int> s = {1, 2, 3, 4};
    print(s);
    s.insert(6); // Add an element
    print(s);
    s.erase(3); // Remove an element
    print(s);
    cout << "size " << s.size() << endl; // Get the number of elements
    cout << s.empty() << endl;           // Check if the set is empty
    s.clear();                          // Remove all elements
    // while multiset allows to have multiple same elements in a set

    return 0;
}
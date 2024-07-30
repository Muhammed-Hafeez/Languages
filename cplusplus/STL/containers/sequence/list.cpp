#include <iostream>
#include <list>

int main()
{
    // List: A doubly linked list that allows fast insertion and removal at any position.
    std::list<int> lst = {1, 2, 3, 4, 5};
    std::cout << "List: ";
    for (int l : lst)
        std::cout << l << " ";
    std::cout << std::endl;
    // Methods
    lst.push_back(6);  // Add an element at the end
    lst.push_front(0); // Add an element at the front
    lst.pop_back();    // Remove the last element
    lst.pop_front();   // Remove the first element
    lst.size();        // Get the number of elements
    lst.empty();       // Check if the list is empty
    lst.clear();       // Remove all elements

        return 0;
}

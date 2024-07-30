#include <iostream>
#include <list>

int main()
{
    // A bidirectional iterator is used to read and write elements from a container and can move both forward and backward.
    std::list<int> lst = {1, 2, 3, 4, 5};
    std::list<int>::iterator it;

    std::cout << "Bidirectional Iterator: ";
    for (it = lst.begin(); it != lst.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Move backward
    std::cout << "Reverse Bidirectional Iterator: ";
    for (it = --lst.end(); it != --lst.begin(); --it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

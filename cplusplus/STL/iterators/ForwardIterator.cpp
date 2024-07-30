#include <iostream>
#include <forward_list>

int main()
{
    // A forward iterator is used to read and write elements from a container and can move only in the forward direction.

    std::forward_list<int> flist = {1, 2, 3, 4, 5};
    std::forward_list<int>::iterator it;

    std::cout << "Forward Iterator: ";
    for (it = flist.begin(); it != flist.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

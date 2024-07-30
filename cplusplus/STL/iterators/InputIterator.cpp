#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    /*
An input iterator is used to read elements from a container. The most common example is reading elements from an input stream.
     */
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int>::iterator it;

    std::cout << "Input Iterator: ";
    for (it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <vector>

int main()
{
    // A random access iterator is used to read and write elements from a container and can move in any direction and jump to any element directly.
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int>::iterator it;

    std::cout << "Random Access Iterator: ";
    for (it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Random access
    std::cout << "Third element: " << vec[2] << std::endl;
    std::cout << "First element + 3: " << *(vec.begin() + 3) << std::endl;

    return 0;
}

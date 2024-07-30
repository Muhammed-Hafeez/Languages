#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> // for std::ostream_iterator
void print(std::vector<int> destination) {
    for (int num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
};
int main()
{
    // Initializing a vector with some values
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Destination vector for std::copy and std::transform
    std::vector<int> destination(numbers.size());

    // Using std::copy to copy elements from one vector to another
    std::copy(numbers.begin(), numbers.end(), destination.begin());

    std::cout << "After std::copy: ";
    print(destination);

    // Using std::transform to modify each element by multiplying by 2
    std::transform(numbers.begin(), numbers.end(), destination.begin(), [](int x)
                   { return x * 2; });

    std::cout << "After std::transform (multiply by 2): ";
    print(destination);
    // Using std::fill to set all elements to a specific value
    std::fill(destination.begin(), destination.end(), 0);

    std::cout << "After std::fill (set all to 0): ";
    print(destination);

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // for functors

int main()
{
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {5, 4, 3, 2, 1};
    std::vector<int> result(vec1.size());

    // Using std::transform with std::bit_and
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::bit_and<int>());
    std::cout << "Bitwise AND: ";
    for (int n : result)
        std::cout << n << " ";
    std::cout << std::endl;

    // Using std::transform with std::bit_or
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::bit_or<int>());
    std::cout << "Bitwise OR: ";
    for (int n : result)
        std::cout << n << " ";
    std::cout << std::endl;

    // Using std::transform with std::bit_xor
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::bit_xor<int>());
    std::cout << "Bitwise XOR: ";
    for (int n : result)
        std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}

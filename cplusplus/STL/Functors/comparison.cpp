#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // for functors

int main()
{
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {5, 4, 3, 2, 1};
    std::vector<bool> result(vec1.size());

    // Using std::transform with std::equal_to
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::equal_to<int>());
    std::cout << "Equal to: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    // Using std::transform with std::not_equal_to
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::not_equal_to<int>());
    std::cout << "Not equal to: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    // Using std::transform with std::greater
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::greater<int>());
    std::cout << "Greater: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    // Using std::transform with std::less
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::less<int>());
    std::cout << "Less: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    // Using std::transform with std::greater_equal
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::greater_equal<int>());
    std::cout << "Greater or equal: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    // Using std::transform with std::less_equal
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::less_equal<int>());
    std::cout << "Less or equal: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    return 0;
}

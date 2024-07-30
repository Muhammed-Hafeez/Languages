#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // for functors

int main()
{
    std::vector<bool> vec1 = {true, false, true, false};
    std::vector<bool> vec2 = {true, true, false, false};
    std::vector<bool> result(vec1.size());

    // Using std::transform with std::logical_and
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::logical_and<bool>());
    std::cout << "Logical AND: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    // Using std::transform with std::logical_or
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::logical_or<bool>());
    std::cout << "Logical OR: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    // Using std::transform with std::logical_not
    std::transform(vec1.begin(), vec1.end(), result.begin(), std::logical_not<bool>());
    std::cout << "Logical NOT: ";
    for (bool b : result)
        std::cout << b << " ";
    std::cout << std::endl;

    return 0;
}

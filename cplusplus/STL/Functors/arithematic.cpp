#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // for functors

int main()
{
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {5, 4, 3, 2, 1};
    std::vector<int> result(vec1.size());

    // Using std::transform with std::plus
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::plus<int>());
    std::cout << "Addition: ";
    for (int n : result)
        std::cout << n << " ";
    std::cout << std::endl;

    // Using std::transform with std::minus
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::minus<int>());
    std::cout << "Subtraction: ";
    for (int n : result)
        std::cout << n << " ";
    std::cout << std::endl;

    // Using std::transform with std::multiplies
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::multiplies<int>());
    std::cout << "Multiplication: ";
    for (int n : result)
        std::cout << n << " ";
    std::cout << std::endl;

    // Using std::transform with std::divides
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::divides<int>());
    std::cout << "Division: ";
    for (int n : result)
        std::cout << n << " ";
    std::cout << std::endl;

    // Using std::transform with std::modulus
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), std::modulus<int>());
    std::cout << "Modulus: ";
    for (int n : result)
        std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}

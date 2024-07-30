
#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate, std::inner_product, std::adjacent_difference, std::partial_sum

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use std::accumulate to sum up the elements in the vector
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "The sum of the elements in the vector is: " << sum << std::endl;

    // Use std::inner_product to calculate the inner product of two vectors
    std::vector<int> weights = {2, 2, 2, 2, 2}; // Example weights
    int innerProd = std::inner_product(numbers.begin(), numbers.end(), weights.begin(), 0);
    std::cout << "The inner product of the two vectors is: " << innerProd << std::endl;

    // Use std::adjacent_difference to compute the differences between adjacent elements
    std::vector<int> diff(numbers.size());
    std::adjacent_difference(numbers.begin(), numbers.end(), diff.begin());
    std::cout << "The adjacent differences are: ";
    for (int n : diff)
        std::cout << n << " ";
    std::cout << std::endl;

    // Use std::partial_sum to compute the partial sums of the elements
    std::vector<int> partialSums(numbers.size());
    std::partial_sum(numbers.begin(), numbers.end(), partialSums.begin());
    std::cout << "The partial sums are: ";
    for (int n : partialSums)
        std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}

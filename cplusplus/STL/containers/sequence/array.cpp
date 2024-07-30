#include <iostream>
#include <array>

int main()
{
    // Array: A fixed-size array that provides fast access to its elements.
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::cout << "Array: ";
    for (int a : arr)
        std::cout << a << " ";
    std::cout << std::endl;
    // Methods
    arr.size();  // Get the number of elements
    arr.empty(); // Check if the array is empty
    arr.fill(0); // Fill the array with a value
    arr.at(2);   // Access element at a specific position (with bounds checking)


    return 0;
}

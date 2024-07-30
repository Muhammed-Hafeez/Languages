#include <iostream>
#include <deque>

int main()
{
    // Deque: A double-ended queue that allows fast insertion and removal at both ends.
    std::deque<int> deq = {1, 2, 3, 4, 5};
    std::cout << "Deque: ";
    for (int d : deq)
        std::cout << d << " ";
    std::cout << std::endl;
    // Methods
    deq.push_back(6);  // Add an element at the end
    deq.push_front(0); // Add an element at the front
    deq.pop_back();    // Remove the last element
    deq.pop_front();   // Remove the first element
    deq.size();        // Get the number of elements
    deq.empty();       // Check if the deque is empty
    deq.clear();       // Remove all elements

        return 0;
}

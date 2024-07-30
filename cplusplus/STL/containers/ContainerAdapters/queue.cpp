#include <iostream>
#include <queue>

int main()
{
    // Queue: A FIFO (first-in, first-out) queue.
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    // Methods
    q.front(); // Get the front element
    q.back();  // Get the back element
    q.pop();   // Remove the front element
    q.size();  // Get the number of elements
    q.empty(); // Check if the queue is empty

    std::cout << "Queue front: " << q.front() << std::endl;
    std::cout << "Queue back: " << q.back() << std::endl;
    return 0;
}

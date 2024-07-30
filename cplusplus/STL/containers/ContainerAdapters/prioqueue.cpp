#include <iostream>
#include <queue>

int main()
{
    //Priority Queue : A queue where the highest priority element is always at the front.std::queue<int> q;
    std::priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(2);

    // Methods
    pq.top();   // Get the top element
    pq.pop();   // Remove the top element
    pq.size();  // Get the number of elements
    pq.empty(); // Check if the priority queue is empty

    std::cout << "Priority Queue top: " << pq.top() << std::endl;
    return 0;
}

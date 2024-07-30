#include <iostream>
#include <forward_list>
void print(auto fwd_list)
{
    std::cout << "Forward List: ";
    for (const auto f : fwd_list)
        std::cout << f << " ";
    std::cout << std::endl;
}
int main()
{
    // Forward List: A singly linked list that allows fast insertion and removal at any position.
    std::forward_list<int> fwd_lst = {1, 2, 3, 4, 5};
    print(fwd_lst);
    // Methods
    auto it = fwd_lst.begin(); // Iterator pointing to the first element
    // Insert 10 after the first element
    fwd_lst.insert_after(it, 10);
    print(fwd_lst);

    fwd_lst.push_front(0); // Add an element at the front
    fwd_lst.pop_front();   // Remove the first element
    fwd_lst.empty();       // Check if the forward list is empty
    fwd_lst.clear();       // Remove all elements

    return 0;
}

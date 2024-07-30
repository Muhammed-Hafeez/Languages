#include <iostream>
#include <stack> //Stack: A LIFO (last-in, first-out) stack.
using namespace std;
void print(auto s, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> stk;
    cout << "stack is empty which is true "
         << stk.empty() << " else false 0 "
         << endl;
    stk.push(20);
    stk.push(30);
    print(stk, stk.size());
    stk.pop();
    print(stk, stk.size());
    stk.top();   // Get the top element
    stk.pop();   // Remove the top element
    stk.size();  // Get the number of elements
    stk.empty(); // Check if the stack is empty
    return 0;
}
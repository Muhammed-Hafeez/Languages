#include <iostream>
#include <functional> // for std::function and std::bind

void printMessage(const std::string &message)
{
    std::cout << "Message: " << message << std::endl;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Using std::function to store a function
    std::function<void(const std::string &)> func = printMessage;
    func("Hello, World!");

    // Using std::bind to create a new function with pre-bound arguments
    auto addFive = std::bind(add, 5, std::placeholders::_1);
    std::cout << "5 + 10 = " << addFive(10) << std::endl;

    return 0;
}

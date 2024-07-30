#include <iostream>
#include <memory> // for std::unique_ptr, std::shared_ptr, std::weak_ptr

class Resource
{
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
    void greet() const { std::cout << "Hello from Resource\n"; }
};

void useResource(std::shared_ptr<Resource> res)
{
    res->greet();
    std::cout << "Resource use count: " << res.use_count() << std::endl;
}

int main()
{
    // Using std::unique_ptr
    std::unique_ptr<Resource> uniqueRes(new Resource());
    uniqueRes->greet();

    // Using std::shared_ptr
    std::shared_ptr<Resource> sharedRes1 = std::make_shared<Resource>();
    std::shared_ptr<Resource> sharedRes2 = sharedRes1;
    std::cout << "Shared resource use count: " << sharedRes1.use_count() << std::endl;

    // Using std::weak_ptr
    std::weak_ptr<Resource> weakRes = sharedRes1;
    std::cout << "Shared resource use count after weak pointer: " << sharedRes1.use_count() << std::endl;

    // Checking if weak pointer is valid
    if (std::shared_ptr<Resource> tempRes = weakRes.lock())
    {
        tempRes->greet();
        std::cout << "Weak pointer successfully locked\n";
    }
    else
    {
        std::cout << "Weak pointer is expired\n";
    }

    // Demonstrating resource sharing
    useResource(sharedRes1);

    return 0;
}

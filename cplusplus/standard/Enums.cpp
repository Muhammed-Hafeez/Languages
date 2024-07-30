#include <iostream>
/**
 * In C++, an enumeration (enum) is a user-defined data type that consists of a
 * set of named integer constants. Enums are used to represent a collection of
 * related values in a readable and maintainable way. They enhance code
 * readability by giving meaningful names to integer values and help in reducing
 * errors by limiting the values that a variable can take.
 */
enum class StatusCode : int
{
    SUCCESS = 200,
    CLIENT_ERROR = 400,
    SERVER_ERROR = 500
};

void handleResponse(StatusCode code)
{
    switch (code)
    {
    case StatusCode::SUCCESS:
        std::cout << "Request succeeded." << std::endl;
        break;
    case StatusCode::CLIENT_ERROR:
        std::cout << "Client error occurred." << std::endl;
        break;
    case StatusCode::SERVER_ERROR:
        std::cout << "Server error occurred." << std::endl;
        break;
    default:
        std::cout << "Unknown status code." << std::endl;
        break;
    }
}

int main()
{
    StatusCode code = StatusCode::CLIENT_ERROR;
    handleResponse(code);

    return 0;
}

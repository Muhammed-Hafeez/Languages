#include <iostream>
#include <utility> // for std::pair
#include <tuple>   // for std::tuple

// Function returning a pair
std::pair<int, std::string> getPerson()
{
    return std::make_pair(1, "Alice");
}

// Function returning a tuple
std::tuple<int, std::string, double> getDetailedPerson()
{
    return std::make_tuple(1, "Alice", 75.5);
}

int main()
{
    // Using std::pair
    std::pair<int, std::string> person = getPerson();
    std::cout << "ID: " << person.first << ", Name: " << person.second << std::endl;

    // Using std::tuple
    std::tuple<int, std::string, double> detailedPerson = getDetailedPerson();
    std::cout << "ID: " << std::get<0>(detailedPerson) << ", Name: " << std::get<1>(detailedPerson)
              << ", Weight: " << std::get<2>(detailedPerson) << std::endl;

    return 0;
}

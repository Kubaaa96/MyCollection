#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> result;

    for (int i = 1; i <= n; ++i) {
        if (i % 15 == 0) {
            result.emplace_back("FizzBuzz");
        } else if (i % 5 == 0) {
            result.emplace_back("Buzz");
        } else if (i % 3 == 0) {
            result.emplace_back("Fizz");
        } else {
            result.emplace_back(std::to_string(i));
        }
    }

    return result;
}

int main()
{
    std::vector<std::string> returnList = fizzBuzz(15);

    for(auto item : returnList)
    {
        std::cout << item << "\n";
    }
}
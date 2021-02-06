#include <vector>
#include <iostream>
#include <limits>

std::vector<std::string> commonChars(std::vector<std::string>& A) {
    std::vector<int> count(26, std::numeric_limits<int>::max());
    std::vector<std::string> result;
    for (const auto& a : A) {
        std::vector<int> tmp_count(count.size());
        for (const auto& c : a) {
            ++tmp_count[c - 'a'];
        }
        for (int i = 0; i < count.size(); ++i) {
            count[i] = std::min(count[i], tmp_count[i]);
        }
    }
    for (int i = 0; i < count.size(); ++i) {
        for (auto j = 0; j < count[i]; ++j) {
            result.emplace_back(1, i + 'a');
        }
    }
    return result;
}

int main()
{
    std::vector<std::string> letters{"bella","label","roller"};
    for(auto string : commonChars(letters))
    {
        std::cout << string << " ";
    }
    std::cout << "\n";
    std::vector<std::string> letters2{"cool","lock","cook"};
    for(auto string : commonChars(letters2))
    {
        std::cout << string << " ";
    }
    std::cout << "\n";
    return 0;
}
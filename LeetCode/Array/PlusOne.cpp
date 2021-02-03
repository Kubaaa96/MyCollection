#include <vector>
#include <iostream>
std::vector<int> plusOne(std::vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; --i) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            ++digits[i];
            return digits;
        }
    }
    digits[0] = 1;
    digits.emplace_back(0);
    return digits;
}

int main()
{
    std::vector<int> test1{1, 2, 3};
    std::vector<int> test2 = plusOne(test1);
    for(auto item : test1)
    {
        std::cout << item << " ";
    }
    std::cout << "\n";
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

int removeElement(std::vector<int>& nums, int val) {
    nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}

int main()
{
    std::vector<int> vector1{3,2,2,3};
    std::cout << std::to_string(removeElement(vector1, 3)) << " ";
    for(auto item : vector1)
    {
        std::cout << item << ", ";
    }
    std::cout << "\n";
    std::vector<int> vector2{0,1,2,2,3,0,4,2};
    std::cout << std::to_string(removeElement(vector2, 2)) << " ";
    for(auto item : vector2)
    {
        std::cout << item << ", ";
    }
}
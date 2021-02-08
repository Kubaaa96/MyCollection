#include <iostream>
#include <vector>
#include <algorithm>

// https://en.wikipedia.org/wiki/Permutation#Generation_in_lexicographic_order
void nextPermutation(std::vector<int>& nums) {
int n = nums.size(), k, l;
    for (k = n - 2; k >= 0; k--) {
        if (nums[k] < nums[k + 1]) {
            break;
        }
    }
    if (k < 0) {
        std::reverse(nums.begin(), nums.end());
    } else {
        for (l = n - 1; l > k; l--) {
            if (nums[l] > nums[k]) {
                break;
            }
        } 
        std::swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
}

void printVector(std::vector<int>& vector)
{
    for(auto item : vector)
    {
        std::cout << item << ", ";
    }
}
int main()
{
    std::vector vector1{1,2,3};
    printVector(vector1);
    nextPermutation(vector1);
    std::cout << "\n";
    printVector(vector1);
    std::cout << "\n\n";

    std::vector vector2{3,2,1};
    printVector(vector2);
    nextPermutation(vector2);
    std::cout << "\n";
    printVector(vector2);
    std::cout << "\n\n";

    std::vector vector3{1,1,5};
    printVector(vector3);
    nextPermutation(vector3);
    std::cout << "\n";
    printVector(vector3);
}
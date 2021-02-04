#include <vector>
#include <iostream>
std::vector<std::string> summaryRanges(std::vector<int>& nums) {
    std::vector<std::string> ranges;
    if (nums.empty()) {
        return ranges;
    }

    int start = nums[0], end = nums[0];
    for (int i = 1; i <= nums.size(); ++i) {
        if (i < nums.size() && nums[i] == end + 1) {
            end = nums[i];
        } else  {
            auto&& range = std::to_string(start);
            if (start != end) {
                range.append("->" + std::to_string(end));
            }
            ranges.emplace_back(range);
            if (i < nums.size()) {
                start = end = nums[i];
            }
        }
    }

    return ranges;
}

int main()
{
    std::vector<int> nums{0,1,2,4,5,7};
    for(auto string : summaryRanges(nums))
    {
        std::cout << string << " ";
    }
    std::cout << "\n";
    std::vector<int> nums1{0,2,3,4,6,8,9};
    for(auto string : summaryRanges(nums1))
    {
        std::cout << string << " ";
    }
    std::cout << "\n";
    return 0;
}
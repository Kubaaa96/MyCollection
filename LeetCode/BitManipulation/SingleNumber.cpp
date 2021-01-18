#include <vector>
#include <iostream>

int gettingSingleNumber(std::vector<int>& nums)
{
    int tempResult = 0;
    for(auto num : nums)
    {
        tempResult ^= num;
    }
    return tempResult;
}

int main()
{
    std::vector<int> vector1{2, 2, 3, 1, 3};
    std::vector<int> vector2{4, 1, 3, 2, 4, 1, 3};
    std::vector<int> vector3{2, 2, 1};
    std::vector<int> vector4{9, 6, 4, 6, 9, 3, 4, 2, 3};

    if(gettingSingleNumber(vector1) == 1)
    {
        std::cout << "Vector1 = 1\n";
    }
    if(gettingSingleNumber(vector2) == 2)
    {
        std::cout << "Vector2 = 2\n";
    }
    if(gettingSingleNumber(vector3) == 1)
    {
        std::cout << "Vector3 = 1\n";
    }
    if(gettingSingleNumber(vector4) == 2)
    {
        std::cout << "Vector4 = 2\n";
    }
}
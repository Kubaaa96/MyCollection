#include <vector>
#include <iostream>

int gettingSingleNumber(std::vector<int>& nums)
{
        int x1 = 0, x2 = 0, mask = 0;
         
        for (int i : nums) {
            x2 ^= x1 & i;
            x1 ^= i;
            mask = ~(x1 & x2);
            x2 &= mask;
            x1 &= mask;
        }

        return x1; 
}

int main()
{
    std::vector<int> vector1{2, 2, 3, 1, 3, 2, 3};
    std::vector<int> vector2{4, 1, 3, 2, 4, 1, 3, 4, 2, 2, 3, 6};
    std::vector<int> vector3{2, 2, 1, 1, 1, 3, 2};
    std::vector<int> vector4{9, 6, 4, 6, 9, 3, 4, 2, 3, 9, 6, 4, 3, 2, 2, 8};

    if(gettingSingleNumber(vector1) == 1)
    {
        std::cout << "Vector1 = " << gettingSingleNumber(vector1) << "\n";
    }
    if(gettingSingleNumber(vector2) == 6)
    {
        std::cout << "Vector2 = " <<  gettingSingleNumber(vector2) <<"\n";
    }
    if(gettingSingleNumber(vector3) == 3)
    {
        std::cout << "Vector3 = "<< gettingSingleNumber(vector3) << "\n";
    }
    if(gettingSingleNumber(vector4) == 8)
    {
        std::cout << "Vector4 = "<< gettingSingleNumber(vector4) << "\n";
    }
}
#include <vector>
#include <iostream>

int hammingWeight(uint32_t n) {
    int count;
    for (count=0; n; count++)
        n &= n - 1;
    return count;
}

int main()
{
    std::cout << std::to_string(hammingWeight(0b00000010100101000001111010011100)) << "\n";
    std::cout << std::to_string(hammingWeight(0b11111111111111111111111111111101)) << "\n";
}
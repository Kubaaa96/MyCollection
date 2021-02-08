#include <iostream>

    int rangeBitwiseAnd(int m, int n) {
        return (n > m) ? (rangeBitwiseAnd(m/2, n/2) << 1) : m;
    }

int main()
{
    std::cout << std::to_string(rangeBitwiseAnd(5, 7)) << "\n";
    std::cout << std::to_string(rangeBitwiseAnd(0, 1)) << "\n";
}
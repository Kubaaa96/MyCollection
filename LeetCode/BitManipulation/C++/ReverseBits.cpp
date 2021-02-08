#include <vector>
#include <iostream>

#include <cmath>

uint32_t reverseBits(uint32_t n) {
    unsigned int B = 0;
    for(int i=0;i<32;i++){
        unsigned int j = pow(2,31-i);
        if((n & (1<<i)) == (1<<i)) B += j; 
    }
return B;
}
int main()
{
    std::cout << std::to_string(reverseBits(0b00000010100101000001111010011100)) << "\n";
    std::cout << std::to_string(reverseBits(0b11111111111111111111111111111101)) << "\n";
}
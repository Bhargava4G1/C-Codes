#include <stdio.h>
int bitwiseAddition(int n1, int n2)
{
    int carry = 0;
    while (n2 != 0)
    {
        carry = n1 & n2;
        n1 = n1 ^ n2;
        n2 = carry << 1;
    }
    return n1;
    
}

int bitwiseMultiplication(int a, int b) {
    int result = 0;
    while (b != 0) {
        if (b & 1) {
            printf("%d\n",(b & 1));
            result = bitwiseAddition(result, a);
        }
        a <<= 1;  // Shift 'a' left by one bit
        b >>= 1;  // Shift 'b' right by one bit
    }
    return result;
}

int main() {
    int result = bitwiseMultiplication(3, 2);
    printf("Bitwise Multiplication Result: %d\n", result); // Output: 15
    return 0;
}

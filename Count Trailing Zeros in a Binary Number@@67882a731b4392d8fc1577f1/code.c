#include <stdio.h>
int main() {
    unsigned int number;
    scanf("%u", &number);
    int trailing_zeros = __builtin_ctz(number);
    printf("%d",trailing_zeros);
    return 0;
}
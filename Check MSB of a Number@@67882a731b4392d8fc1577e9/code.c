#include <stdio.h>
#include <limits.h>
int main() {
    int number;
    scanf("%d", &number);
    int numBits = sizeof(number) * CHAR_BIT;
    if (number & (1 << (numBits - 1))) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}



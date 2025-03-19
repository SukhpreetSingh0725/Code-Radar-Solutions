#include <stdio.h>
int main() {
    int number,msb=0;
    scanf("%d", &number);
    while (number != 0) {
        msb = number; 
        number >>= 1;
    }
    if (msb & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int number,msb_position = -1;
    scanf("%d", &number);
    int position = 0;
    while (number != 0) {
        if (number & 1) {
            msb_position = position;
        }
        number >>= 1;
        position++;
    }
    if (msb_position != -1) {
        if (number & (1 << msb_position)) {
            printf("Set");
        } else {
            printf("Not Set");
        }
    } 
    return 0;
}


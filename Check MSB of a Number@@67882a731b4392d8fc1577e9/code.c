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
     if (position > 0 && (original_number & (1 << (position - 1)))) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}


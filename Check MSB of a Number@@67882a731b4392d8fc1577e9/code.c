#include <stdio.h>
int main() {
    int number, original_number;
    scanf("%d", &number);
    original_number = number;
    int position = 0;
    while (number != 0) {
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


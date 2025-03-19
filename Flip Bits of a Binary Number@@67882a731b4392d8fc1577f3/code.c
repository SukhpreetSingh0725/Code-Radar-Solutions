#include <stdio.h>
int main() {
    unsigned int number;
    scanf("%u", &number);
    unsigned int flipped_number = ~number;
    printf("%u", flipped_number);

    return 0;
}

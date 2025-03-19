#include <stdio.h>
int main() {
    unsigned int number;
    scanf("%d", &number);
    unsigned int flipped_number = ~number;
    printf("%d", flipped_number);

    return 0;
}

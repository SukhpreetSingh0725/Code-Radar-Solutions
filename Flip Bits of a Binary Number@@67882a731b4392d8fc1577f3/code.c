#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    int flipped_number = ~number;
    printf("%d", flipped_number);

    return 0;
}

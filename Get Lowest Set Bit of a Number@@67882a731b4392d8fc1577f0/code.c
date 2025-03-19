#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
        int position = __builtin_ctz(number);
        printf(" %d", position);
    return 0;
}

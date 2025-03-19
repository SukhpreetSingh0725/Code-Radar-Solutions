#include <stdio.h>
void decimal_to_binary(int n) {
    while (n > 0) {
        printf("%d", n % 2);
        n = n / 2;
    }
}
int main() {
    int number;
    scanf("%d", &number);
    decimal_to_binary(number);
    printf("\n");
    return 0;
}



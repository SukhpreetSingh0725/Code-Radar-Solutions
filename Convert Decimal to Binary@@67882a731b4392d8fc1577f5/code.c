#include <stdio.h>
void decimal_to_binary(int n) {
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}
int main() {
    int number;
    scanf("%d", &number);
    decimal_to_binary(number);
    return 0;
}

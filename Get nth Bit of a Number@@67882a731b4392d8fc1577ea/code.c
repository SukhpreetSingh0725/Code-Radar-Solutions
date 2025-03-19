#include<stdio.h>
int main() {
    int number, n, bit;
    scanf("%d", &number);
    scanf("%d", &n);
    bit = (number >> n) & 1;
    printf("%d",bit);
    return 0;
}

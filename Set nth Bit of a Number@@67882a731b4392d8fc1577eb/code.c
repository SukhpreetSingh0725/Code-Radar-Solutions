#include <stdio.h>
void set_nth_bit(int *num, int n) {
    *num = *num | (1 << n);
}

int main() {
    int number, n;
    scanf("%d", &number);
    scanf("%d", &n);
    set_nth_bit(&number, n);
    printf("%d", n);

    return 0;
}

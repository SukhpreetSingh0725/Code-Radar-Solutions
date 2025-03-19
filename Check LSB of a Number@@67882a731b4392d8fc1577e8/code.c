#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    if (number & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}

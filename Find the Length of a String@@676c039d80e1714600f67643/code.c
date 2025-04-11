#include <stdio.h>
#include <string.h>
int main() {
    char a[30];
    if(fgets(a, 30, stdin) == NULL) {
        printf("0");
    } else {
        printf("%d", strlen(a));
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char a[30];
    fgets(a, 30, stdin);
    printf("%s",strrev(a));
    return 0;
}

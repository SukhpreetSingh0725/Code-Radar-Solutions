#include<stdio.h>
#include <string.h>
int main() {
    char a[30],b[30];
    fgets(a, 30, stdin);
    int len = strlen(a);
    strcpy(b,a);
    if (a[len - 1] == '\n') a[--len] = '\0';
    for(int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
    if (strcmp(a,b)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}

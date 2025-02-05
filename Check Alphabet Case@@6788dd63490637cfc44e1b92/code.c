#include <stdio.h>

int main() {
    char let;
    scanf("%c",&let);
    if(let>='A'&& let<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}
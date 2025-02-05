#include <stdio.h>

int main() {
    char let;
    scanf("%c",&let);
    if(let>='A'&& let<='Z'){
        printf("Uppercase");
    }
    else if(let>='a'&& let<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
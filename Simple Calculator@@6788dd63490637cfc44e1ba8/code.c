#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%c",&ch);
    if(ch=='+'){
        printf("%d",a+b);
    } else if(ch=='-'){
        printf("%d",a-b);
    } else if(ch=='*'){
        printf("%d",a*b);
    } else if(ch=='/'){
        printf("%f",a/b);
    } 
    return 0;
}
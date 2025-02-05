#include <stdio.h>
int main() {
    int a,b;
    char ch;
    float div;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%c",&ch);
    div=(float)a/b;
    if(ch=='+'){
        printf("%d",a+b);
    } else if(ch=='-'){
        printf("%d",a-b);
    } else if(ch=='*'){
        printf("%d",a*b);
    } else if(ch=='/'){
        printf("%d",div);
    } 
    return 0;
}
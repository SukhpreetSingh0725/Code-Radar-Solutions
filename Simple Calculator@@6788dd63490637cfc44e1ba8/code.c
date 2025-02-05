#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf(" %c",&ch);
    if(ch=='+'){
        printf("%d%c%d=%d",a,b,ch,a+b);
    } else if(ch=='-'){
        printf("%d",a-b);
    } else if(ch=='*'){
        printf("%d",a*b);
    } else if(ch=='/'){
        printf("%d",a/b);
    }
    return 0;
}
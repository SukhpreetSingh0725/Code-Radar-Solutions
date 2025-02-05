#include <stdio.h>
int main() {
    int a,b;
    char ch;
    int sum,mul,sub,div;
    scanf("%d%d%c",&a,&b,&ch);
    sum=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    if(ch=='+'){
        printf("%d",sum);
    } else if(ch=='-'){
        printf("%d",sub);
    } else if(ch=='-'){
        printf("%d",div);
    } else if(ch=='/'){
        printf("%d",mul);
    }
    return 0;
}
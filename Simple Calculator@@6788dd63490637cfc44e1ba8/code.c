#include <stdio.h>
int main() {
    int a,b;
    char ch;
    float div;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%c",&ch);
    div=a/b;
    if(ch=='+'){
        printf("%d",a+b);
    } else if(ch=='-'){
        printf("%d",a-b);
    } else if(ch=='*'){
        printf("%d",a*b);
    } else if(ch=='/'){
        if(b!=0){
        printf("%.f",div);
        }
        else{
            printf("error");
        }
    } 
    return 0;
}
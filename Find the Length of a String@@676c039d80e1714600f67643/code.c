#include<stdio.h>
#include<string.h>
int main(){
    char a[30];
    fgets(a,100,stdin);
    if(a==NULL){
        printf("0");
    }
    else{
    printf("%d",strlen(a));}
    return 0;
}
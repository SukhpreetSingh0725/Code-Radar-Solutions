#include <stdio.h>
int main() {
    int isPrime=1;
    int a;
    scanf("%d",&a);
    if(a<=1){
        isPrime=0;
    } else {
        for(i=2;i*i<=a;i++){
            if(a%i==0){
                isPrime=0;
            }
    }
    }
    if(isPrime){
        printf("Prime");
    } else{
        printf("Not Prime");
    }
    return 0;
}
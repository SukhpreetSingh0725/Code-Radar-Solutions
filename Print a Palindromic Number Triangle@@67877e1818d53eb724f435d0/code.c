#include <stdio.h>
int main() {
    int a,i,j,b=11;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        for(j=1;j<=i;){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
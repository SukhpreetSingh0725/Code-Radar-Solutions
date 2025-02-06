#include <stdio.h>
int main() {
    int a,i,j,b=11;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        for(j=0;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
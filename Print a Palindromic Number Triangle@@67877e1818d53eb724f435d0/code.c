#include <stdio.h>
int main() {
    int a,b=11;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d%d",b*j);
        }
        printf("\n");
    }
    return 0;
}
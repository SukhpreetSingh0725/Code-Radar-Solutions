#include <stdio.h>
int main() {
    int a,i,j,b=11;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d",*);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", *);
        }
        printf("\n");
    }
    return 0;
}
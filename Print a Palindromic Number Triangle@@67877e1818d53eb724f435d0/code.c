#include <stdio.h>
int main() {
    int a,i,j,b=11;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
          for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
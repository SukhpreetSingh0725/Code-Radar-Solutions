#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
          for (j = 1; j <= a - i; j++) {
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",'*');
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%c", '*');
        }
        printf("\n");
    }
    return 0;
}
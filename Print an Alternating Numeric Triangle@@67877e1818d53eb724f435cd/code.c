#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<=i;j++){
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("%d", a);
    return 0;
}
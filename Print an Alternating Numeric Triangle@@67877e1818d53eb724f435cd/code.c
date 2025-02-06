#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("%d", a);
    return 0;
}
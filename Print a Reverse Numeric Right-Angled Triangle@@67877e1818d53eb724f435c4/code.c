#include <stdio.h>
int main() {
    int a,b=1;
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",b+j-1);
        }
        printf("\n");
    }
    
    return 0;
}
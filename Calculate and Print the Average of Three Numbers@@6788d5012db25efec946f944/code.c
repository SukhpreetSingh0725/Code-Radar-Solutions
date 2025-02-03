#include <stdio.h>

int main() {
    int num1,num2,num3;
    float avg;
    scanf("%d %d %d",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("Average: %f", avg);
    return 0;
}
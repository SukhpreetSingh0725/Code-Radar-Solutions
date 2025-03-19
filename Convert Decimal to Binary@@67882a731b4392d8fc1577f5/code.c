#include <stdio.h>

void decimal_to_binary(int n) {
    int binary[32]; 
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;  
        i++; 
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}
int main() {
    int number;
    scanf("%d", &number);
    decimal_to_binary(number);
    return 0;
}




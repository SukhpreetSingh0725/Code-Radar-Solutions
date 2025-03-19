#include <stdio.h>
#include <math.h>
int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
         if (is_prime(num)) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}

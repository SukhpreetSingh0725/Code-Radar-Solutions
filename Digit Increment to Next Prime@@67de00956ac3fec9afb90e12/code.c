#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}

int nextPrime(int d) {
    while (!isPrime(++d));
    return d;
}

int incrementToPrimeDigits(int num) {
    int result = 0, place = 1;
    while (num) {
        result = nextPrime(num % 10) * place + result;
        place *= 10 + (num % 10 >= 7); 
        num /= 10;
    }
    return result;
}



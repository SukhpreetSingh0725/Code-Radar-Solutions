#include <stdio.h>
int nextPrime(int d) {
    if (d <= 1) return 2;
    if (d == 2) return 2;
    if (d <= 3) return 3;
    if (d <= 5) return 5;
    if (d <= 7) return 7;
    return 11;  
}

int incrementToPrimeDigits(int num) {
    int result = 0, place = 1;
    while (num) {
        result = nextPrime(num % 10) * place + result;
        place *= 10;
        num /= 10;
    }
    return result;
}




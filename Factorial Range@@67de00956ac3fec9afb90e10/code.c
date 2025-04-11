int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
void factorialrange(int start, int end) {
    if (start < 0 || end < 0 || start >= end) {
        printf("Invalid range\n");
        return;
    }

    for (int i = start; i < end; i++) {
        printf("%d\n", factorial(i));
    }
}

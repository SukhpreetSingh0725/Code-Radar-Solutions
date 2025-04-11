#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int printed = 0;
    for (int i = 0; i < n && !printed; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                printf("%d %d\n", arr[i], arr[j]);
                printed = 1;
                break;
            }
        }
    }
    return 0;
}
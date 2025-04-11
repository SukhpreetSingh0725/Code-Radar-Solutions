#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                int unique = 1;
                for (int x = 0; x < i; x++) {
                    for (int y = x + 1; y < n; y++) {
                        if ((arr[x] == arr[i] && arr[y] == arr[j]) || 
                            (arr[x] == arr[j] && arr[y] == arr[i])) {
                            unique = 0;
                        }
                    }
                }
                if (unique) printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}


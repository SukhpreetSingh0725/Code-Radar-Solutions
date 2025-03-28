#include <stdio.h>
int findFirstPeak(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1]))
            return arr[i];
    return -1;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    n = sizeof(arr) / sizeof(arr[0]);
    int res = findFirstPeak(arr, n)
    printf("%d\n", res);
    return 0;
}

#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            return arr[i]; 
        }
    }
    return -1;
}

int main() {
    int b;
    scanf("%d", &b);
    int arr[b];
    for (int i = 0; i < b; i++) {
        scanf("%d", &arr[i]);
    }
    int peakElement = findFirstPeak(arr, b);
    printf("%d\n", peakElement);

    return 0;
}

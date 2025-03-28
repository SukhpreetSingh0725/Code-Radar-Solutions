#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1]))
            return i;
    return -1;
}

int main() {
    int b;
    scanf("%d",&b);
    int arr[b];
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakIndex = findFirstPeak(arr, n);
    printf("%d\n",peakIndex);


    return 0;
}

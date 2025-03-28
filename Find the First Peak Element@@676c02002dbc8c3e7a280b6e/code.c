#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1]))
            return i;
    return -1;
}

int main() {
    int arr[] = {10, 20, 15, 2, 23, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakIndex = findFirstPeak(arr, n);
    
    if (peakIndex != -1)
        printf("First peak element is %d at index %d\n", arr[peakIndex], peakIndex);
    else
        printf("No peak element found\n");

    return 0;
}

#include <stdio.h>
void findEvenOdd(int arr[], int n, int *Even, int *Odd) {
    *Even = 0;
    *Odd = 0;
    for (int i = 0; i < n; i++) { 
        if (arr[i] % 2 == 0) {
            (*Even)++; 
        } else {
            (*Odd)++;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int Even, Odd;
    findEvenOdd(arr, n, &Even, &Odd);
    printf("%d %d\n", Even, Odd); 
    return 0;
}


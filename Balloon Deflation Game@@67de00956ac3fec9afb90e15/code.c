
#include <stdlib.h>

void deflateBalloons(int air[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (air[j] > air[j + 1]) {
                int temp = air[j];
                air[j] = air[j + 1];
                air[j + 1] = temp;
            }
        }
    }

    int remaining = n;

    for (int i = 0; i < n; i++) {
        if (air[i] > 0) {
            printf("%d\n", remaining - 1);  
            int min_air = air[i]; 
            for (int j = i; j < n; j++) {
                air[j] -= min_air; 
            }
            remaining--; 
        }
    }
}



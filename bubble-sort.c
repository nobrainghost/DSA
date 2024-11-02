#include <stdio.h>

int main() {

    printf("Bubble Sorting Array\n");
    
    int a[] = {3, 5, 4, 7, 6, 9, 8, 0, 2, 1};
    int i = 0;
    int swapped; 
    int length = sizeof(a) / sizeof(a[0]);
    
    do {
        swapped = 0; // Reset swapped to 0 (false) for the current pass
        for (int j = 0; j < length - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
             
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                swapped = 1; // Set swapped to 1 (true) if a swap occurred
            }
        }
        
      
        for (int k = 0; k < length; k++) {
            printf("%d ", a[k]);
        }
        printf("\n"); // New line after printing the array

        i++; 
    } while (swapped); // Continue until no swaps occur

    return 0;
}

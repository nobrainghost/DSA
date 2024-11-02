#include <iostream>

int main() {
    std::cout << "Bubble Sorting Array\n";
    int a[] = {3, 5, 4, 7, 6, 9, 8, 0, 2, 1};
    int i = 0;
    bool swapped;
    int length = sizeof(a) / sizeof(a[0]);
    
    do {
        swapped = false; // Reset swapped to false for the current pass
        for (int j = 0; j < length - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Swap the elements
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                swapped = true; // Set swapped to true if a swap occurred
            }
        }
        
        for (int k = 0; k < length; k++) {
            std::cout << a[k] << " ";
        }
        std::cout << "\n";

        i++;
    } while (swapped); // Continue until no swaps occur

    return 0;
}


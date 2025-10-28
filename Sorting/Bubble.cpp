#include <stdio.h>
using namespace std;

int main() {
    int arr[100], n, i, j, temp;

    // Take input for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Take input for array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort logic
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if(arr[j] > arr[j + 1]) {
                // Swap if in wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

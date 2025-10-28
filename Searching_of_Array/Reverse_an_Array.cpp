#include <stdio.h>

// Function to reverse the array
void reverseArray(int arr[], int n) {
    int i, temp;
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

// Function to display the array
void displayArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n, i;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    displayArray(arr, n);

    // Function call to reverse
    reverseArray(arr, n);

    printf("Reversed array: ");
    displayArray(arr, n);

    return 0;
}


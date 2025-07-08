#include <stdio.h>

int main() {
    int arr[100];  // array with enough size
    int n, i, pos, value;

    // Taking size of array
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    // Taking array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking position and value to insert
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shifting elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Inserting the new element
    arr[pos - 1] = value;
    n++;  // increasing size of array

    // Displaying the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

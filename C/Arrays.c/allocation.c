#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 10, cols = 15;

    // Dynamically allocate memory for the 2D array using malloc
    int** array = (int**)malloc(rows * sizeof(int*));  // Allocate memory for rows
    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(cols * sizeof(int));  // Allocate memory for columns in each row
    }

    // Initialize and print the array (example)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = i * cols + j;  // Simple initialization
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Deallocate the memory
    for (int i = 0; i < rows; i++) {
        free(array[i]);  // Free each row
    }
    free(array);  // Free the main array

    return 0;
}


#include <stdio.h>

int main() {
    int i, j;
    int n = 6;  // Size of the heart (adjust for a larger or smaller heart)

    // ANSI escape codes for red color
    char *red = "\033[1;31m";
    char *reset = "\033[0m";

    // Loop to print the upper part of the heart
    for (i = n / 2; i <= n; i += 2) {
        for (j = 1; j < n - i; j++) {
            printf(" "); // Printing spaces before the first half of the heart
        }
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                printf("%s*", red); // Print red stars at the boundary of the first half
            } else {
                printf(" "); // Print spaces inside the heart
            }
        }
        for (j = 1; j <= n - i; j++) {
            printf(" "); // Printing spaces between the two halves
        }
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                printf("%s*", red); // Print red stars at the boundary of the second half
            } else {
                printf(" "); // Print spaces inside the heart
            }
        }
        printf("%s\n", reset); // Reset color to default
    }

    // Loop to print the lower part of the heart
    for (i = n; i >= 1; i--) {
        for (j = i; j < n; j++) {
            printf(" "); // Printing spaces before the lower part of the heart
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("%s*", red); // Print red stars at the boundary of the lower part
            } else {
                printf(" "); // Print spaces inside the heart
            }
        }
        printf("%s\n", reset); // Reset color to default
    }

    return 0;
}

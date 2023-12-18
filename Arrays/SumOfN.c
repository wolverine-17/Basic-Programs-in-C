#include <stdio.h>

int main() {
    // Declare variables
    int n, sum = 0;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int numbers[n];

    // Get input from the user for each element
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Add the entered number to the sum
        sum += numbers[i];
    }

    // Display the entered numbers and the sum
    printf("Entered numbers: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\nSum of %d numbers: %d\n", n, sum);

    return 0;
}

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; ++i, --j) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

int main() {
    // Declare a string
    char input[100];

    // Get input from the user
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character from the input
    input[strcspn(input, "\n")] = '\0';

    // Check if the entered string is a palindrome
    if (isPalindrome(input)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}

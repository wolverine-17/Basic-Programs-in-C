#include <stdio.h>

int isVowel(char ch)
{
    // Check if the character is a vowel (both uppercase and lowercase)
    return (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' ||
            ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U');
}

int main()
{
    // Declare variables
    char str[100];
    int count = 0;

    // Get input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; ++i)
    {
        // Check if the character is a vowel
        if (isVowel(str[i]))
        {
            ++count;
        }
    }

    // Display the result
    printf("Number of vowels in the string: %d\n", count);

    return 0;
}

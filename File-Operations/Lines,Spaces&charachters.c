#include <stdio.h>

int main()
{
    // File pointer
    FILE *file;

    // Open the file in read mode
    file = fopen("sample.txt", "r");

    // Check if the file exists
    if (file == NULL)
    {
        printf("Could not open the file.\n");
        return 1;
    }

    // Variables to store counts
    int lines = 0, spaces = 0, characters = 0;
    char ch;

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        // Count newline characters to find the number of lines
        if (ch == '\n')
        {
            lines++;
        }

        // Count spaces
        if (ch == ' ')
        {
            spaces++;
        }
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("Number of lines: %d\n", lines);
    printf("Number of spaces: %d\n", spaces);
    printf("Number of characters: %d\n", characters);

    return 0;
}

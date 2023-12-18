#include <stdio.h>

int main()
{
    // File pointers for source and destination files
    FILE *sourceFile, *destinationFile;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");

    // Check if the source file exists
    if (sourceFile == NULL)
    {
        printf("Could not open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");

    // Check if the destination file is created successfully
    if (destinationFile == NULL)
    {
        printf("Could not create the destination file.\n");
        fclose(sourceFile); // Close the source file before returning
        return 1;
    }

    // Copy content from source file to destination file
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}

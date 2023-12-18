#include <stdio.h>

int main() {
    // File pointers for source and destination files
    FILE *sourceFile, *destinationFile;

    // Open the source file in read mode
    sourceFile = fopen("input.txt", "r");

    // Check if the source file exists
    if (sourceFile == NULL) {
        printf("Could not open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("output.txt", "w");

    // Check if the destination file is created successfully
    if (destinationFile == NULL) {
        printf("Could not create the destination file.\n");
        fclose(sourceFile); // Close the source file before returning
        return 1;
    }

    // Read data from the source file and write processed data to the destination file
    int number;
    while (fscanf(sourceFile, "%d", &number) == 1) {
        // Process the data (for example, multiply each number by 2)
        int processedNumber = number * 2;

        // Write the processed data to the destination file
        fprintf(destinationFile, "%d\n", processedNumber);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Data processed and written to the output file successfully.\n");

    return 0;
}

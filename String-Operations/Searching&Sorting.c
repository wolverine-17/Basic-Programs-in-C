#include <stdio.h>
#include <string.h>

// Function to perform linear search for a name in the array
int linearSearch(char names[][50], int n, const char *target)
{
    for (int i = 0; i < n; ++i)
    {
        if (strcmp(names[i], target) == 0)
        {
            return i; // Name found, return its index
        }
    }
    return -1; // Name not found
}

// Function to perform bubble sort on an array of names
void bubbleSort(char names[][50], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                // Swap names if they are in the wrong order
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main()
{
    // Declare variables
    int n;

    // Get the number of names from the user
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Declare an array of names
    char names[n][50];

    // Get names from the user
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; ++i)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Sort the names alphabetically
    bubbleSort(names, n);

    // Display the sorted names
    printf("\nSorted Names:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%s\n", names[i]);
    }

    // Search for a name
    char target[50];
    printf("\nEnter a name to search: ");
    scanf("%s", target);

    int index = linearSearch(names, n, target);

    if (index != -1)
    {
        printf("%s found at position %d in the sorted list.\n", target, index + 1);
    }
    else
    {
        printf("%s not found in the list.\n", target);
    }

    return 0;
}

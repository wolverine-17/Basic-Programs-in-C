#include <stdio.h>

// Define a structure for student information
struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};

int main()
{
    // Declare a structure variable
    struct Student student1;

    // Declare a pointer to a structure
    struct Student *ptr;

    // Assign the address of the structure variable to the pointer
    ptr = &student1;

    // Input information using structure member access via pointer
    printf("Enter student name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->rollNumber);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display information using structure member access via pointer
    printf("\nStudent Information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->rollNumber);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}

#include <stdio.h>

// Define a structure for student information
struct Student
{
    char name[50];
    int rollNumber;
    float marks[3];
};

// Function to input information for a student
void inputStudent(struct Student *student)
{
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter marks in three subjects:\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student->marks[i]);
    }
}

// Function to display information for a student
void displayStudent(const struct Student *student)
{
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Marks in three subjects: %.2f, %.2f, %.2f\n", student->marks[0], student->marks[1], student->marks[2]);
}

int main()
{
    // Declare an array of structures to store information for multiple students
    struct Student students[5];

    // Input information for each student
    for (int i = 0; i < 5; ++i)
    {
        printf("\nEnter information for student %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    // Display information for each student
    for (int i = 0; i < 5; ++i)
    {
        displayStudent(&students[i]);
    }

    return 0;
}

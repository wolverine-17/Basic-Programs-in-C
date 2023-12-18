#include <stdio.h>

int main()
{
    // Declare variables
    int mark;

    // Get input from the user
    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    // Determine the grade based on the mark
    if (mark >= 90 && mark <= 100)
    {
        printf("Grade: A\n");
    }
    else if (mark >= 80 && mark < 90)
    {
        printf("Grade: B\n");
    }
    else if (mark >= 70 && mark < 80)
    {
        printf("Grade: C\n");
    }
    else if (mark >= 60 && mark < 70)
    {
        printf("Grade: D\n");
    }
    else if (mark >= 0 && mark < 60)
    {
        printf("Grade: F\n");
    }
    else
    {
        printf("Invalid mark\n");
    }

    return 0;
}

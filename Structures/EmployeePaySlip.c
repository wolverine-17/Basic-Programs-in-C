#include <stdio.h>

// Define a structure for employee information
struct Employee
{
    char name[50];
    int employeeID;
    float basicSalary;
    float allowances;
};

// Function to calculate gross salary
float calculateGrossSalary(const struct Employee *employee)
{
    // Assuming a simple calculation: gross salary = basic salary + allowances
    return employee->basicSalary + employee->allowances;
}

// Function to display pay slip
void displayPaySlip(const struct Employee *employee, float grossSalary)
{
    printf("\nPay Slip for Employee ID %d:\n", employee->employeeID);
    printf("Name: %s\n", employee->name);
    printf("Basic Salary: %.2f\n", employee->basicSalary);
    printf("Allowances: %.2f\n", employee->allowances);
    printf("Gross Salary: %.2f\n", grossSalary);
}

int main()
{
    // Declare an array of structures to store information for multiple employees
    struct Employee employees[3];

    // Input information for each employee
    for (int i = 0; i < 3; ++i)
    {
        printf("\nEnter information for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);
        printf("Allowances: ");
        scanf("%f", &employees[i].allowances);
    }

    // Display pay slip for each employee
    for (int i = 0; i < 3; ++i)
    {
        float grossSalary = calculateGrossSalary(&employees[i]);
        displayPaySlip(&employees[i], grossSalary);
    }

    return 0;
}

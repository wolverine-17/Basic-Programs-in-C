#include <stdio.h>

// Define a structure for customer information
struct Customer
{
    char name[50];
    int customerID;
    float unitsConsumed;
};

// Function to calculate total charge
float calculateTotalCharge(const struct Customer *customer)
{
    // Assuming a simple calculation: total charge = unit rate * units consumed
    float unitRate = 5.0; // Replace with the actual unit rate
    return unitRate * customer->unitsConsumed;
}

// Function to display electricity bill
void displayElectricityBill(const struct Customer *customer, float totalCharge)
{
    printf("\nElectricity Bill for Customer ID %d:\n", customer->customerID);
    printf("Name: %s\n", customer->name);
    printf("Units Consumed: %.2f\n", customer->unitsConsumed);
    printf("Total Charge: %.2f\n", totalCharge);
}

int main()
{
    // Declare an array of structures to store information for multiple customers
    struct Customer customers[3];

    // Input information for each customer
    for (int i = 0; i < 3; ++i)
    {
        printf("\nEnter information for Customer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Customer ID: ");
        scanf("%d", &customers[i].customerID);
        printf("Units Consumed: ");
        scanf("%f", &customers[i].unitsConsumed);
    }

    // Display electricity bill for each customer
    for (int i = 0; i < 3; ++i)
    {
        float totalCharge = calculateTotalCharge(&customers[i]);
        displayElectricityBill(&customers[i], totalCharge);
    }

    return 0;
}

#include <stdio.h>

struct Employee {
    int employeeID;
    char employeeName[50];
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Read employee details
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Employee Name: ");
        scanf("%s", employees[i].employeeName);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("\n");
    }

    // Sort employees in descending order based on salary
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (employees[j].salary < employees[j + 1].salary) {
                // Swap the employee records
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }

    // Display employee details in descending order based on salary
    printf("Employee details in descending order based on salary:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Employee Name: %s\n", employees[i].employeeName);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}

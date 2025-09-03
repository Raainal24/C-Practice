#include <stdio.h>

int main() {
    float basic_salary, gross_salary, da, hra;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate DA and HRA
    da = 0.5 * basic_salary;
    hra = 0.4 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + da + hra;

    printf("Basic salary: Rs. %.2f\n", basic_salary);
    printf("Dearness Allowance (50%%): Rs. %.2f\n", da);
    printf("House Rent Allowance (40%%): Rs. %.2f\n", hra);
    printf("Gross salary: Rs. %.2f\n", gross_salary);

    return 0;
}

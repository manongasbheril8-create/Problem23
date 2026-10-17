#include <stdio.h>

int main() {
    char name[100];
    float basic_salary, initial_deductions;
    float additional_deduction, total_deductions, net_salary;

    printf("Enter employee's name: ");
    scanf(" %99[^\n]", name); 

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter total deductions: ");
    scanf("%f", &initial_deductions);

    if (basic_salary < 0 || initial_deductions < 0) {
        printf("Error: Negative amounts are not allowed.\n");
        return 1;
    }
    if (initial_deductions > basic_salary) {
        printf("Error: Deductions cannot exceed the basic salary.\n");
        return 1;
    }

    if (basic_salary >= 30000.0) {
        additional_deduction = basic_salary * 0.05;
    } else {
        additional_deduction = basic_salary * 0.02;
    }

    total_deductions = initial_deductions + additional_deduction;
    net_salary = basic_salary - total_deductions;

    printf("\n--- Pay Summary ---\n");
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: Php %.2f\n", basic_salary);
    printf("Total Deductions: Php %.2f\n", total_deductions);
    printf("Net Salary: Php %.2f\n", net_salary);

    return 0;
}
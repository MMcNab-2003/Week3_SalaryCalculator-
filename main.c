#include <stdio.h>

int main() {
double basicSalary;
double allowance;
double deductions;
double grossSalary;
double netSalary;

printf("EMPLOYEE SALARY CALCULATOR\n");
printf("--------------------------\n");

printf("Enter basic salary: ");
scanf("%lf", &basicSalary);

printf("Enter allowance: ");
scanf("%lf", &allowance);

printf("Enter deductions: ");
scanf("%lf", &deductions);

grossSalary = basicSalary + allowance;
netSalary = grossSalary - deductions;

printf("\nBasic Salary: %.2f\n", basicSalary);
printf("Allowance: %.2f\n", allowance);
printf("Gross Salary: %.2f\n", grossSalary);
printf("Deductions: %.2f\n", deductions);
printf("Net Salary: %.2f\n", netSalary);

return 0;
}

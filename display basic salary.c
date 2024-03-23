#include <stdio.h>
#include <conio.h>
int main() 
{
    int basic_salary, grade;

    printf("Enter Basic salary: ");
    scanf("%d", &basic_salary);

    printf("Enter grade of 1, 2, 3, 4\n");
    scanf("%d", &grade);

    float hra, da, gross_salary;

    if (grade == 1) {
        hra = 0.05 * basic_salary;
        da = 0.7 * basic_salary;

    } else if (grade == 2) {
        hra = 0.10 * basic_salary;
        da = 0.80 * basic_salary;
        
    } else if (grade == 3) {
        hra = 0.15 * basic_salary;
        da = 0.10 * basic_salary;

    } else if (grade == 4) {
        hra = 0.2 * basic_salary;
        da = 0.15 * basic_salary;

    } else {
        printf("Grade is Invalid Please enter a grade between 1 to 4\n");
        return 1;
    }

    gross_salary = basic_salary + hra + da;

    printf("Basic Salary: %d\n", basic_salary);
    printf("Grade: %d\n", grade);
    printf("HRA: %f\n", hra);
    printf("DA: %f\n", da);
    printf("Gross Salary: %f\n", gross_salary);

    return 0;
}
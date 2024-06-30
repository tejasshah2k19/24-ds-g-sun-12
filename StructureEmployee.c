#include <stdio.h>

struct employee
{
    char empName[30];
    char department[20];
    int basicSalary;
    int allowance;
    int hra;
    int tax;
    int salary;
};

int main()
{

    struct employee e[10];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter Name - Department - Salary : ");
        scanf("%s%s%d", &e[i].empName, &e[i].department, &e[i].basicSalary);

        e[i].allowance = 1500;
        e[i].hra = e[i].basicSalary * 0.07;
        e[i].tax = e[i].basicSalary * 0.10;

        e[i].salary = e[i].basicSalary + e[i].allowance + e[i].hra - e[i].tax;
    }

    printf("\nNAME  DEPT_NAME  BASIC_SALARY  SALARY");
    for (i = 0; i < 3; i++)
    {
        printf("\n%-10s %-10s %-6d %-6d", e[i].empName, e[i].department, e[i].basicSalary, e[i].salary);
    }

    //highest salary : 85000
    //Raman 


    //employee-> asc salary : sort structure 
    

    return 0;
}
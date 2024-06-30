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

    struct employee e[10],tmp;
    int i,j;
    int maxIndex;
    int maxSalary;  
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

    //11 33 234 45 22 
    maxIndex = 0; 
    maxSalary = e[0].salary; 
    for(i=0;i<3;i++){
        if(e[i].salary > maxSalary){
            maxSalary = e[i].salary; 
            maxIndex = i; 
        }
    }
    //employee-> asc salary : sort structure 
    printf("\nMax = %d",maxSalary);
    printf("\nName = %s",e[maxIndex].empName);


    //11 33 45  22  234 
    //               j  j+1
    //sort 
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            if(e[j].salary > e[j+1].salary){
                tmp = e[j];
                e[j] = e[j+1];
                e[j+1] = tmp; 
            }
        }
    }

   printf("\nNAME  DEPT_NAME  BASIC_SALARY  SALARY");
    for (i = 0; i < 3; i++)
    {
        printf("\n%-10s %-10s %-6d %-6d", e[i].empName, e[i].department, e[i].basicSalary, e[i].salary);
    }


    return 0;
}
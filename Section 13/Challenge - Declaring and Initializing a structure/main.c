#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "employee.h"

Employee* getEmployee();

int main(void)
{



    char mattName[8] = "Matthew\0";

    Employee *matt = NULL;

    matt = (Employee*) malloc(sizeof(Employee));

    strcpy(matt->name, mattName);
    matt->hireDate = 20191007;
    matt->salary = 65000.00;

    printf("[%s, %d, %f]", (*matt).name, (*matt).hireDate, (*matt).salary);

    Employee *anEmployee = NULL;
    anEmployee = getEmployee();

    free(anEmployee);
    free(matt);
    return 0;
}

Employee* getEmployee()
{
    
    Employee *temp = NULL;

    temp = (Employee*) malloc(sizeof(Employee));
    char theName[32];
    int theHireDate;
    float theSalary;

    printf("\nName?");
    fgets(theName, 32, stdin);
    printf("\nHire date?");
    scanf("%d", &theHireDate);
    printf("\nsalary?");
    scanf("%f", &theSalary);

    strcpy(temp->name, theName);
    temp->hireDate = theHireDate;
    temp->salary = theSalary;
    return temp;
}
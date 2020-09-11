#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "employee.h"

int main(void)
{



    char mattName[8] = "Matthew\0";

    Employee *matt = NULL;

    matt = (Employee*) malloc(sizeof(Employee));

    strcpy(matt->name, mattName);
    matt->hireDate = 20191007;
    matt->salary = 65000.00;

    printf("[%s, %d, %f]", (*matt).name, (*matt).hireDate, (*matt).salary);

    free(matt);
    return 0;
}
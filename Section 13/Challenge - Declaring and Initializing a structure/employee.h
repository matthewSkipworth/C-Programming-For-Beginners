#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
    char name[32];
    int hireDate;
    float salary;
} Employee;

#endif
#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <stdio.h>
#include <stdbool.h>

int myStrlen(char (*)[]);
void myStrcat(char(*)[], char(*)[], char(*)[]);
bool myStrcmp(char(*)[], char(*)[]);

#endif
#ifndef _RAIN_UTIL_H_
#define _RAIN_UTIL_H_

#include <stdio.h>
#define N_MONTHS 12

// header

void yearly_avg_rain(double (*)[3][12], double (*)[3]);
void yearly_total_rain(double (*)[3][12], double (*)[3]);
double arr_sum(double [], int);
// double arr_avg(double [], int);

#endif
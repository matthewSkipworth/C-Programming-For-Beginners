#ifndef _RAIN_UTIL_H_
#define _RAIN_UTIL_H_

#include <stdio.h>
#define N_MONTHS 12
#define N_YEARS 3
// header

void yearly_avg_rain(double (*)[3][12], double (*)[3]);
void yearly_total_rain(double (*)[3][12], double (*)[3]);
void average_rain_per_month(double(*)[3][12]);

double arr_sum(double [], int);
// double arr_avg(double [], int);

#endif
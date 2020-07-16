// #include <stdio.h>
#include "lib/conversion_util.h"

#define DAYS 365
#define HOURS 24
#define MINUTES 60

int main(void)
{

    int minutes;
    double years, days, hours;

    int *m_ptr = &minutes;

    // double *h_ptr = &hours, *d_ptr = &days, *y_ptr = &years;

    get_minutes(m_ptr);

    hours = minutes_to_hours(*m_ptr);
    days = hours_to_days(hours);
    years = days_to_years(days);

    printf("%d minutes = %lf hours\n \
    OR %lf days\n \
    OR %lf years.", minutes, hours, days, years);

    // doesn't work right... may need other functions.
    // printf("\n[%lf years : %lf days : %lf hours : %lf minutes]", (years > 1 ? ((int) years % 1) : 0), (int) days % DAYS, (int) hours % HOURS, (int) minutes%MINUTES);

    return 0;
}


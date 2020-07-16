#include "../lib/conversion_util.h"


void get_minutes(int *m_ptr)
{
    int minutes;
    puts("How many minutes to convert?");
    scanf("%d", &minutes);
    *m_ptr = minutes;
    printf("%d minutes entered.\n", minutes);
}

double minutes_to_hours(int minutes)
{
    return ( (double) minutes / 60);
}
double hours_to_days(double hours)
{
    return (hours / 24);
}

double days_to_years(double days)
{
    return (days / 365);
}

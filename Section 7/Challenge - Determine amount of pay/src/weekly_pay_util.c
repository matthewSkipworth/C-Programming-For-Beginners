#include "../lib/weekly_pay_util.h"

void get_hours(double *hours_worked)
{
    double hours;
    printf("\nHow many hours have you worked this week?");

    scanf("%lf", &hours);

    // printf("\n%lf hours you say....", hours);

    *hours_worked = hours;
}

double get_gross_pay(double *weekly_hours, double pay_rate, int weekly_working_hours)
{
    double gross_pay = 0.0, regular_pay = 0.0, overtime = 0.0;

    if (*weekly_hours > weekly_working_hours)
    {
        overtime = (*weekly_hours - weekly_working_hours) * (pay_rate * 1.5);   
        regular_pay = weekly_working_hours * pay_rate;
    }
    else
    {
        regular_pay = (*weekly_hours) * pay_rate;
    }
    

    gross_pay = overtime + regular_pay;
    return gross_pay; 

}

double compute_tax(double gross_pay)
{
    /**
     * 15% of the first $300 
     * 20% of the first $150
     * 25% of the rest...
     */

    double tax;

    if (gross_pay > (300.0 + 150.0))
    {
        tax = ( .25 * (gross_pay - (300.0 + 150.0)) ) +
              (.2 * 150.0) + 
              (.15 * 300.0); 
    }
    else if (gross_pay > 300)
    {
        tax = ( .2 * (gross_pay-300.0) ) + 
              (.15 * 300.0);         
    }
    else
    {
        tax = .15 * gross_pay;
    }
    return tax;
}
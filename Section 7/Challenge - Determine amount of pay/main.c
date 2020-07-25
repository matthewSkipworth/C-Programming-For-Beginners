#include <stdio.h>

#include "lib/weekly_pay_util.h"

#define BASIC_PAY_RATE 12.00
#define WEEKLY_WORKING_HOURS 40

int main(void)
{

    double *h_ptr;
    double hours_worked, gross_pay, tax;

    h_ptr = &hours_worked;

    //ask the user to enter the number of hours worked in a week (double).

    get_hours(h_ptr); 

    //calculate gross pay.
    gross_pay = get_gross_pay(h_ptr, BASIC_PAY_RATE, WEEKLY_WORKING_HOURS);

    tax = compute_tax(gross_pay);

    printf("\nYou've worked %.2lf hours", *h_ptr);
    printf("\nYour gross pay is %.2lf", gross_pay);
    printf("\nYou pay %.2lf in taxes this period.", tax);
    printf("\nYour net pay after taxes is %.2lf", gross_pay-tax);

    return 0;
}


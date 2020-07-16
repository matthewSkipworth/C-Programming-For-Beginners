#include "../include/rain_util.h"

// implementation

void yearly_avg_rain(double (*monthly_rain_ptr)[3][12], double (*year_avg_rain_ptr)[3])
{
    double  avg_this_year = ( (*year_avg_rain_ptr)[0] ) / 12, 
            avg_last_year = ( (*year_avg_rain_ptr)[1] ) / 12, 
            avg_two_years_ago = ( (*year_avg_rain_ptr)[2] ) / 12;

    //  TODO
    puts("\n-- YEARLY AVERAGES --");
    printf("\n%lf inches on average this year", avg_this_year);
    printf("\n%lf inches on average last year", avg_last_year);
    printf("\n%lf inches on average two years ago", avg_two_years_ago);
    puts("");

}

void yearly_total_rain(double (*monthly_rain_ptr)[3][12], double (*year_total_rain_ptr)[3])
{
    double total_this_year = 0.0, total_last_year = 0.0, total_two_years_ago = 0.0;
    // year_total_rain_ptr[0] = &total_this_year;
    // year_total_rain_ptr[1] = &total_last_year;
    // year_total_rain_ptr[2] = &total_two_years_ago;

    total_this_year = arr_sum((*monthly_rain_ptr)[2], N_MONTHS);
    total_last_year = arr_sum((*monthly_rain_ptr)[1], N_MONTHS);
    total_two_years_ago = arr_sum((*monthly_rain_ptr)[0], N_MONTHS);

    puts("\n-- YEARLY TOTALS --");
    printf("\n%lf inches total this year", total_this_year);
    printf("\n%lf inches total last year", total_last_year);
    printf("\n%lf inches total two years ago", total_two_years_ago);
    puts("");
    
    double years[] = {total_this_year, total_last_year, total_two_years_ago};

    (*year_total_rain_ptr)[0] = years[0];
    (*year_total_rain_ptr)[1] = years[1];
    (*year_total_rain_ptr)[2] = years[2];  
}

double arr_sum(double arr[], int arr_size)
{
    double sum = -1.0;
    int i;
    for(i = 0; i < arr_size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}


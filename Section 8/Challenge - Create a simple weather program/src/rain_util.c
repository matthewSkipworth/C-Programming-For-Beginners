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
    puts("\n");

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
    puts("\n");
    
    double years[] = {total_this_year, total_last_year, total_two_years_ago};

    (*year_total_rain_ptr)[0] = years[0];
    (*year_total_rain_ptr)[1] = years[1];
    (*year_total_rain_ptr)[2] = years[2];  
}

void average_rain_per_month(double (*monthly_rain_ptr)[3][12])
{
    // double jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec;
    int i;
    double months[N_MONTHS];
    // const char *month_names_ptr[][N_MONTHS]; 
    const char month_names[12][16] = {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

    // month_names_ptr = &month_names;

    for(i = 0; i < N_MONTHS; i++)
    {
        months[i] = ( (*monthly_rain_ptr)[0][i] + (*monthly_rain_ptr)[1][i] + 
        (*monthly_rain_ptr)[2][i] ) / N_YEARS;
    }

    // jan += (*monthly_rain_ptr)[0][0] + (*monthly_rain_ptr)[1][0] + (*monthly_rain_ptr)[2][0];
    // printf("Total January rain: %lf", months[0]);
    puts("\n-- MONTHLY AVERAGES --");
    for (i = 0; i < N_MONTHS; i++)
    {
        printf("\nAverage rainfall for %s: %.2lf inches", month_names[i], months[i]);
    }
    puts("\n");

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


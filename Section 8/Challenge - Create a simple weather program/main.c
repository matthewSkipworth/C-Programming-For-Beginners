#include "include/rain_util.h"

int main(void)
{
    puts("Simple Weather Program.");

    double (*year_tot_ptr)[3], (*year_avg_ptr)[3], (*month_avg_ptr)[12];
    double yearly_total[3], yearly_avg[3], monthly_avg[12];

    year_tot_ptr = &yearly_total;
    year_avg_ptr = &yearly_avg;
    month_avg_ptr = &monthly_avg;

    printf("\nvalue of year_avg_ptr: %lf",*year_tot_ptr[0]);

    double monthly_rain_averages[3][12] = 
    {
        {187,168.1,80,67.5,99.4,54.6,64.5,138.6,22.8,157.7,123.4,132},
        {153.7,80.1,95.3,45.6,110.2,56.4,107.7,104.8,52.1,72.2,172.2,217.4},
        {179,110.3,83.6,77.2,61.3,96,78.8,85.5,96.6,47.2,104.9,77.4}
        // Stopped at 3 instead of 5. Sue me.
    };
    double (*monthly_rain_avg_ptr)[3][12] = &monthly_rain_averages;

    //find the total rainfall for each year.
    yearly_total_rain(monthly_rain_avg_ptr, year_tot_ptr);

    printf("\ntotal rainfall this year: %lf", (*year_tot_ptr)[0]);
    //find the average rainfall. for each year.
    yearly_avg_rain(monthly_rain_avg_ptr, year_tot_ptr);
    //find the average rainfall per year.
    


    return 0;
}
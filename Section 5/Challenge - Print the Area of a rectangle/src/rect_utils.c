#include <stdio.h>

#include "../lib/rect_utils.h"


void get_width(double *width)
{
    double w = 0;
    puts("\nHow wide is the rectangle?");
    scanf("%lf", &w);
    *width = w;
}

void get_height(double *height)
{
    double h = 0;

    puts("\nHow tall is the rectangle?");
    scanf("%lf", &h);

    *height = h;

}

double compute_rectangle_area(double width, double height)
{
    return width * height;
}

double compute_rectangle_perimeter(double width, double height)
{
    return (2 * width) + (2 * height);
}
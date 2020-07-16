#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "lib/rect_utils.h"

int main(int argc, char *argv[])
{

    double width, height, area, perimeter;

    double *w_ptr = &width;
    double *h_ptr = &height;

    if (argc == 3)
    {
        width = atof(argv[1]);
        height = atof(argv[2]);
    }
    else
    {
        get_height(h_ptr);
        get_width(w_ptr);
    }
    


    printf("\nThe area of the rectangle is %.2lf", compute_rectangle_area(*w_ptr, *h_ptr));
    printf("\nThe perimeter of the rectangle is %.2lf\n", compute_rectangle_perimeter(*w_ptr, *h_ptr));


    return 0;
}

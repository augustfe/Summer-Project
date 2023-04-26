#include <stdlib.h>

void allocate_array(double **array, int nx)
{
    *array = (double *)malloc(nx * sizeof(double));
}
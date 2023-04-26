#include <stdlib.h>

void zeros_1D(double *u, int nx)
{
    for (int i = 0; i < nx; i++)
    {
        u[i] = 0;
    }
}
#include <stdlib.h>

void zeros_1D(double *u)
{
    double size_u = sizeof(u) / sizeof(u[0]);

    for (int i = 0; i < size_u; i++)
    {
        u[i] = 0;
    }
}
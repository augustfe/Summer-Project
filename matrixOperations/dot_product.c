#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int errno;

double dot_product(double *A, int size_A, double *B, int size_B)
{
    int errnum;

    if (size_A != size_B)
    {
        errnum = errno;
        fprintf(stderr, "Incompatible shapes (%d,) and (%d,): %s\n", size_A, size_B, strerror(errnum));
    }

    double S = 0;
    for (int i = 0; i < size_A; i++)
    {
        S += A[i] * B[i];
    }
    return S;
}
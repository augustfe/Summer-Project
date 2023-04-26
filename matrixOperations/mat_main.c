#include "mat_functions.h"
#include <stdio.h>

void zeros()
{
    double *arr;
    int nx = 10;

    allocate_array(&arr, nx);
    zeros_1D(arr, nx);
    printf("1D arr: [");
    for (int i = 0; i < nx; i++)
    {
        printf("%g, ", arr[i]);
    }
    printf("]\n");
    deallocate_array(arr);
}

void dot()
{
    double *A, *B;
    int nx = 10;
    allocate_array(&A, nx);
    allocate_array(&B, nx);
    for (int i = 0; i < 10; i++)
    {
        A[i] = 1;
        B[i] = i + 1;
    }

    double S;
    S = dot_product(A, nx, B, nx);
    printf("A: [");
    for (int i = 0; i < nx; i++)
    {
        printf("%g, ", A[i]);
    }
    printf("]\n");

    printf("B: [");
    for (int i = 0; i < nx; i++)
    {
        printf("%g, ", B[i]);
    }
    printf("]\n");
    printf("Dot product: %g\n", S);

    deallocate_array(A);
    deallocate_array(B);
}

int main()
{
    zeros();
    dot();

    return 0;
}
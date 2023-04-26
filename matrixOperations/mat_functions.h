#ifndef mat_functions_H__
#define mat_functions_H__

void allocate_2D_array(double ***array_ptr, int nx, int ny);

void deallocate_2D_array(double **array);

void allocate_array(double **array, int nx);

void deallocate_array(double *array);

double dot_product(double *A, double *B);

void zeros_1D(double *u);

void zeros_2D(double **A);

#endif
void zeros_2D(double **A)
{
    int ny, nx;
    ny = sizeof(A) / sizeof(A[0]);
    nx = sizeof(A[0]) / sizeof(A[0][0]);

    for (int i = 0; i < ny; i++)
        for (int j = 0; j < nx; j++)
            A[i][j] = 0;
}
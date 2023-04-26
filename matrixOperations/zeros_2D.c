void zeros_2D(double **A, int nx, int ny)
{
    for (int i = 0; i < ny; i++)
        for (int j = 0; j < nx; j++)
            A[i][j] = 0;
}
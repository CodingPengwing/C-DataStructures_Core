/*  Sanity check  */
#include "Array.h"
#include "Data.h"
#include "Matrix.h"

int main(int argc, char const *argv[])
{
    int rows = 5, columns = 10;
    DataMatrix_t matrix = matrix_Create(rows, columns);

    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            Data_t data = *data_Create(i, j, (i+j)/2, "Cool");
            matrix[i][j] = data;
        }
    }
    printf("Ta da! Here's the matrix:\n");
    matrix_Print(matrix, rows, columns);
    matrix_Free(matrix, rows, columns);
    return 0;
}
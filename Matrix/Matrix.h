/*  An implementation of a 2d Array structure.
    Uses the Arrays defined in "Array.h" to 
    make Arrays of Arrays - a Matrix.
*/

#include <stdlib.h>
#include <stdio.h>
#include "Array.h"
#include "Data.h"

#ifndef MATRIX_H
#define MATRIX_H

typedef Array_t * Matrix_t;

// Create a Matrix of size (rows x columns)
Matrix_t *
matrix_Create(size_t rows, size_t columns)
{
    Matrix_t *matrix = (Matrix_t *) malloc(rows * sizeof(*matrix));
    for (size_t i = 0; i < rows; i++)
        matrix[i] = array_Create(columns);        
    return matrix;
}

// Free a Matrix of size (rows x columns)
void 
matrix_Free(Matrix_t *matrix, size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; i++)
        array_Free(matrix[i], columns);
    free(matrix);
}

// Print a Matrix of size (rows x columns)
void 
matrix_Print(Matrix_t *matrix, size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; i++)
        array_Print(matrix[i], columns);
}

// Insert a Data into a Matrix at given (row - column) position
void
matrix_Insert(Matrix_t *matrix, Data_t *data, size_t row, size_t column)
{
    matrix[row][column] = data;
}

#endif
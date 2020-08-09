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

Matrix_t 
matrix_Create(size_t rows, size_t columns)
{
    Matrix_t matrix = (Matrix_t) malloc(rows * sizeof(*matrix));
    for (size_t i = 0; i < rows; i++)
        matrix[i] = array_Create(columns);        
    return matrix;
}

void 
matrix_Free(Matrix_t matrix, size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; i++)
        array_Free(matrix[i], columns);
    free(matrix);
}

void 
matrix_Print(Matrix_t matrix, size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; i++)
        array_Print(matrix[i], columns);
}

#endif
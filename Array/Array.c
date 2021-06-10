
#include "Array.h"

// Make a new Array of specified length
Array_t *
array_Create(size_t length) 
{
    Array_t *array = (Array_t *) malloc(length * sizeof(Data_t *));
    return array;
}

// Free an Array
void 
array_Free(Array_t *array, size_t length)
{
    for (size_t i = 0; i < length; i++) 
    {
        if (array[i]) data_Free(array[i]);
    }
    free(array);
}

// Print the Array - [x_0, x_1, ... x_n-1]
void 
array_Print(Array_t *array, size_t length)
{
    printf("[");
    for (size_t i = 0; i < length; i++)
    {
        data_Print(array[i]);
        if (i != length-1) 
            printf(", ");
    }
    printf("]\n");
}

// Insert a Data into an Array at given index
void
array_Insert(Array_t *array, Data_t *data, size_t index)
{
    array[index] = data;
}

// Sort an Array
void 
array_Sort(Array_t *array, size_t length)
{
    qsort(array, length, sizeof(*array), dataArray_Compare);
}

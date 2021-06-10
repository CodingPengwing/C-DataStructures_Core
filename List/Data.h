/*  Data class file, change this file according to whatever data
    type or structure that needs to be implemented. As long as all
    the functions in here are well defined, the program will work.
*/

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "util.h"

#ifndef DATA_H
#define DATA_H

// If you change Data definition, you *have to* change data_Create(),
// data_Free(), data_Print(), data_Compare() and dataArray_Compare() functions
typedef struct data Data_t;
struct data {
    int x;
    int y;
    int z;
    char *string;
};

//  Create a new piece of Data
Data_t *data_Create(int x, int y, int z, char *string);

//  Free all the variables inside the Data
void data_Free(Data_t *data);

//  Print the Data
void data_Print(Data_t *data);

//  Compare Datas, return -1 if data_1 is smaller, return +1 if data_1 is larger
int data_Compare(Data_t *data_1, Data_t *data_2);

//  Compare Datas in Arrays (pointer to pointer to Data)
int dataArray_Compare(const void *data_1, const void *data_2);

#endif // DATA_H

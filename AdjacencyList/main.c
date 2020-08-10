/*  Sanity check  */

#include "Data.h"
#include "List.h"
#include "Node.h"
#include "AdjacencyList.h"

int main(int argc, char const *argv[])
{
    size_t size = 10;
    char *strings[] = {"I", "am", "just", "so", "epic", "look", "at", "this", "code", "though"};

    AdjacencyList_t adjList = adjacencyList_Create(size);
    for (size_t i = 0; i < 50; i++)
    {
        Data_t *data = data_Create(i, i*10, i*20, strings[i%10]);
        adjacencyList_InsertBack(adjList, i%size, data);
    }

    printf("Ta da! Here's the adjacency list:\n");
    adjacencyList_Print(adjList, size);
    adjacencyList_Free(adjList, size);
    return 0;
}
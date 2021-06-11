# SimpleDataStructures
A collection of libraries of some easily reusable/maintainable code for basic Data Structures in C. 
These libraries can be adapted to work with any data type or any combination of data (eg. tuple), 
so long as the Data files are properly modified to cater for those specific data types.

The creation (memory allocation), insertion, and deletion (memory freeing) of elements are abstracted 
into functions, hiding the details of pointer and memory allocation from the user.

To test the codes: 
1. Clone the folders 
2. Navigate to each specific folder for a data structure in terminal
3. Run the following command:  
- make test  
Which is a combination of these 3 commands (you can use these if the first one doesn't work):
- make
- make run_test
- make clean


Note:
To unclutter the code, exception handling has been mostly omitted. It is recommended 
that for any integration of this library in a program, the code in each section should be 
read through and modified to have sufficient error checking first. The following error 
checks are recommended:  
- Null inputs into functions
- Null indices in an array/matrix/adjacency list

The function exit_with_error() has been defined in util and is very useful for debugging.

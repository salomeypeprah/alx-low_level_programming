#include "function_pointers.h"
/**
*int_index - a function that searches for an integer
*@array: array
*@size: size of elements
*@cmp: pointer to function
*Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int ans = 0;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (; ans < size; ans++)

if (cmp(array[ans]))
return (ans);

return (-1);
}


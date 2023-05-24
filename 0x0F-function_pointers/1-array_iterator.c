#include "function_pointers.h"
#include <stdio.h>
/**
*array_iterator - a function that executes a given function
*@array: array
*@size: size of array
*@action: pointer to the function
*Return: {}
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int ans = 0;
if (array == NULL || action == NULL)
return;
for (; ans < size; ans++)

action(array[ans]);

}


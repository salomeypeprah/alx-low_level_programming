#include <stdlib.h>
#include "main.h"
/**
**_realloc - a function that reallocates a memory block using malloc and free
* @ptr: pointer to the memory previsouly allocated by malloc
* @old_size: size of the allocated memory for ptr
* @new_size: new size of the new memory block
*
* Return: pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *old_ptr;
unsigned int aa = 0;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
ptr1 = malloc(new_size);
if (!ptr1)
return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
for (; aa < new_size; aa++)
ptr1[aa] = old_ptr[aa];
}
if (new_size > old_size)
{
for (; aa < old_size; aa++)
ptr1[aa] = old_ptr[aa];
}
free(ptr);
return (ptr1);
}

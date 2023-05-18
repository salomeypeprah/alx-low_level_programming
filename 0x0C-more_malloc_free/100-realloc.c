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
	char *num1;
	char *num2;
	unsigned int ans = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	num2 = malloc(new_size);
	if (!num2)
		return (NULL);

	num2  = ptr;

	if (new_size < old_size)
	{
		for (ans = 0; ans < new_size; ans++)
			num1[ans] = num2[ans];
	}

	if (new_size > old_size)
	{
		for (ans = 0; ans < old_size; ans++)
			num2[ans] = ptr[ans];
	}

	free(ptr);
	return (num2);
}


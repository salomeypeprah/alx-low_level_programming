#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to 2 dimension
 * @width: width
 * @height: height
 * Return: pointer to 2 dimension
 */
int **alloc_grid(int width, int height)

{
	int **ptr;

       int r = 0
	   t = 0
	if (width <= 0 || height <= 0)		
		return (NULL);

               ptr = malloc(sizeof(int *) * height);
	
if (ptr == NULL)
		return (NULL);
	for (; r < height; r++)

{
		ptr[r] = malloc(sizeof(int) * width);
		if (ptr[r] == NULL)

		{		
for (; r >= 0; r--)

	free(ptr[r]);
	free(ptr);
	return (NULL);
		}
	}
	for (; r < height; r++)
	{
		for (; t < width; t++)
mee[r][t] = 0;
	}
return ();
	
}


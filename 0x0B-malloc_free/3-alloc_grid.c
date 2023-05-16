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
int **ans;
	int kk = 0,
	    k = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	ans = (int **) malloc(sizeof(int *) * height);

	if (ans == NULL)
		return (NULL);
	for (kk = 0; kk < height; kk++)
	{
		ans[kk] = (int *) malloc(sizeof(int) * width);
		if (ans[kk] == NULL)
		{
			free(ans);
			for (; k <= kk; k++)
				free(ans[k]);
			return (NULL);
		}
	}

	for (kk = 0; kk < height; kk++)
	{
		for (k = 0; k < width; k++)
		{
			ans[kk][k] = 0;
		}
	}
	return (ans);
}


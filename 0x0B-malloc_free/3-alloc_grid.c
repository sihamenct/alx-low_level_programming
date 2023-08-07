#include "main.h"
#include <stdlib.h>
/**
* alloc_grid -  function that returns a pointer to a 2 arry of integers
* @width: width input
* @height: height input
* Return: NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);

		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ar[i]);

			free(ar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}

	return (ar);
}

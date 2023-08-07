#include "main.h"
#include <stdlib.h>
/**
* create_array - A function that create array of size size and assign char c
* @size: size of array
* @c: char
* Return: NULL if size = 0
*
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}

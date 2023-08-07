#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - copy the string given as a parameter
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	char *ar;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ar[r] = str[r];

	return (ar);
}

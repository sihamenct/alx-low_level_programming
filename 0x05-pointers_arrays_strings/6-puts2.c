#include "main.h"
/**
* puts2 - reverse a string
* Return: return length
* @str: Pointeur str
*/
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
	length++;
	}
	for (i = 0; i <= (length - 1); i++)
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}

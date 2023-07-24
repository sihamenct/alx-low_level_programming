#include "main.h"
/**
* print_rev - print in reverse
* Return: no return
* @s: Pointeur s
*/
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\n')
	{
	length++;
	s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
	_putchar(s[i]);
	s--;
	}
	_putchar('\n');
}


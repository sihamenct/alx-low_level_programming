
#include "main.h"
/**
* _puts - print a string
* Return: no return
* @str: string
*/
void _puts(char *str)
{

	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}

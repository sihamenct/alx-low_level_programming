#include "main.h"
/**
* print_line - print 0 to 14 ten times
* Return: no return
* @n: number of times
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	}
	_putchar('\n');
}

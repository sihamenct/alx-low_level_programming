#include "main.h"
/**
* print_diagonal - print 0 to 14 ten times
* Return: no return
* @n: number of times
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
		_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	}
	else 
	{
	_putchar('\n');
	}
}

#include "main.h"
/**
* print_triangle - Print square
* Return: no return
* @size: number of times
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
		_putchar(' ');
		}
		for (k = (size - (i - 1)); k <= size; k++)
		{
		_putchar(35);
		}
		if (i == size)
		{
		break;
		}
		_putchar('\n');
	}
	 _putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}

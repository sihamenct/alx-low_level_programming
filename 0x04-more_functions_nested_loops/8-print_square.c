#include "main.h"
/**
* print_square - Print square
* Return: no return
* @size: number of times
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
		_putchar(35);
		}
		if (i == size)
		break;
		_putchar('\n');
	}
	}
	_putchar('\n');
}

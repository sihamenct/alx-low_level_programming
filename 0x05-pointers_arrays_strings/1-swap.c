#include "main.h"
/**
* swap_int - swap a and b
* Return: no return
* @a: Pointeur a
* @b: Pointeur b
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

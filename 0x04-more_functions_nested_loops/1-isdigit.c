#include "main.h"
/**
*_isdigit - check for digits
* Return: 1 if digit 0 if not
* @c: character to check
*/
int _isdigit(int c)
{
	int i;

	i = (int)c;
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
* _isupper- check the uppercase characters
* Return: 1 if uppercase
* @c: character to check
*/
int _isupper(int c)
{
	int i;

	i = (int)c;
	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

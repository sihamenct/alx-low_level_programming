#include "main.h"
/**
* _strlen - length of string
* Return: return length
* @s: Pointeur s
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
return length;

}

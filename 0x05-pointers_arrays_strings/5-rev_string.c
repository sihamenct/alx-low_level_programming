#include "main.h"
/**
* rev_string - reverse a string
* Return: return length
* @s: Pointeur s
*/
void rev_string(char *s)
{
	char rev_str = s[0];
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
	length++;
	}
	for (i = 0; i < length; i++)
	{
	length--;
	rev_str = s[i];
	s[i] = s[length];
	s[length] = rev_str;
	}
}

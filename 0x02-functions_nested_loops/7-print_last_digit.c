#include "main.h"
/**
* print_last_digit - absolute value of given number
* Return: 0 (Success)
* @n: number to check
*/
int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 0)
{
_putchar(-l + '0');
return (-l);
}
else
{
_putchar(l + '0');
return (l);
}
}

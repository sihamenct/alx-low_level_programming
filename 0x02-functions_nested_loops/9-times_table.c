#include "main.h"
/**
* times_table - today is the longest day of my life
* Return: no return
*/
void times_table(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
_putchar(48);
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
k = i * j;
if (k <= 9)
_putchar(k + '0');
else
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
_putchar('\n');
}
}

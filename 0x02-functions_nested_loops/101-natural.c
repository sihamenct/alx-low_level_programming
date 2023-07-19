#include "main.h"
#include <stdio.h>
/**
* main - today is the longest day of my life
* Return: always 0
*/
int main(void)
{
int n, sum;
for (n = 0; n < 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
sum += n;
}
printf("%d\n", sum);
return (0);
}

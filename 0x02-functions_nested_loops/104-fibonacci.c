#include "main.h"
#include <stdio.h>
/**
* main - entry point
* Return: always 0
*/
int main(void)
{
int i, init;
unsigned long f1 = 1, f2 = 2, sum;
unsigned long max = 100000000, f10 = 0, f20 = 0, sum0  = 0;
for (i = 1; i <= 98; i++)
{
if (f10 > 0)
printf("%lu", f10);
init = numLength(max) - 1 - numLength(f1);
while (f10 > 0 && init > 0)
{
printf("%d", 0);
init--;
}
printf("%lu", f1);
sum = (f1 + f2) % max;
sum0 = f10 + f20 + (f1 + f2) / max;
f1 = f2;
f10 = f20;
f2 = sum;
f20 = sum0;
if (i != 98)
printf(",");
else
printf("\n");
}
return (0);
}

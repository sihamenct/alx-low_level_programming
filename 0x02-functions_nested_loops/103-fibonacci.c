#include "main.h"
#include <stdio.h>
/**
* main - entry point
* Return: always 0
*/
int main(void)
{
float t_sum;
unsigned long fib1 = 0, fib2 = 1, sum;
while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
t_sum += sum;
fib1 = fib2;
fib2 = sum;
}
printf("%.0f\n", t_sum);
return (0);
}

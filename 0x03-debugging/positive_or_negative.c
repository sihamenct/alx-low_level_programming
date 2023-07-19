#include "main.h"
/* more headers goes there */
/**
* positive_or_negative - Positive anything is better than negative nothing
* Return: 0 (Success)
*@i:input
*/
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}

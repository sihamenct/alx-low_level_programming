#include "main.h"
/**
* _islower - lowercase test
* Return: 0 (Success)
* @c :Character in ASCII code
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

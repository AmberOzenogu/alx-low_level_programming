#include <stdio.h>
/**
 * _islower -checks for lowercase character
 * Return: 1 OR 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

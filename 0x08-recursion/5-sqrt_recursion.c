#include "main.h"
/**
 * sqrt_check - returns the squareroot of a number
 * @g: test number
 * @c: squared number
 * Return: the square root of c or -1
 */
int sqrt_check(int g, int c)
{
if (g * g == c)
return (g);
if (g * g > c)
return (-1);
return (sqrt_check(g + 1, c));
}
/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: integer to find sqrt of
 * Return: natural square root OR -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}

#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int d, e, f;
for (d = 0; d <= 9; d++)
{
for (e = 0; e <= 9; e++)
{
for (f = 0; f <= 9; f++)
{
if (d != e && e != f && d != f && d < e && f > e)
{
putchar(d + '0');
putchar(e + '0');
putchar(f + '0');
if (!(d == 7 && e == 8 && f == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

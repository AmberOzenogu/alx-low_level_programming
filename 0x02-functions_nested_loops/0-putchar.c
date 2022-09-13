#include "main.h"
/**
 * main - Print "_putchar"
 * Return: 0
 */
int main(void)
{
int i =0;
char put[] = "_putchar";
while (i < 9)
{
_putchar(put[i]);
i++;
}
_putchar('\n');
return (0);
}

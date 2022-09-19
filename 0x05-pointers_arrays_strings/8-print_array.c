#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: the array
 * @n: the number of elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i + 1 != n)
printf(", ");
}
printf("\n");
}

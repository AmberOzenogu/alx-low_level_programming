#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @a: input string
 * Return: string
 */
char *cap_string(char *a)
{
char separator[] = " \t\n,;.!?\"(){}";
int i, j;
for (i = 0; a[i] != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
if (i == 0)
a[i] -= 32;
else
{
for (j = 0; separator[j] != '\0'; j++)
{
if (a[i - 1] == separator[j])
a[i] -= 32;
}
}
}
}
return (a);
}

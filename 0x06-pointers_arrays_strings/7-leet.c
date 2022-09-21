#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @a: string of variable pointer
 * Return: string that is encoded
 */
char *leet(char *a)
{
char leet[] = "aAeEoOtTlL";
char chan[] = "4433007711";
int i, j;
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j++)
{
if (a[i] == leet[j])
a[i] = chan[j];
}
}
return (a);
}

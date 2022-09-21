#include "main.h"
#include <stdio.h>
/**
 * _strncat -concatenates two strings using @ bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; *dest != 0; i++)
dest++;
for (j = 0; j < n && src[j] != 0; j++)
{
*dest = src[j];
dest++;
}
*dest = '\0';
dest -= (i + j);
return (dest);
}

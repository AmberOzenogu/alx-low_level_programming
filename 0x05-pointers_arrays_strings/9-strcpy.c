#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy strings from source array to destination array
 * @dest: destination array
 * @src: source array
 * Return: pointer to destination array
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
*(dest + i) = src[i];
i++;
}
*(dest + i) = '\0';
return (dest);
}

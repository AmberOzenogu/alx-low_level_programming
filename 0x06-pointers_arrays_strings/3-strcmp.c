#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0, less than 1 OR greater than 1
 */
int _strcmp(char *s1, char *s2)
{
int diff = 0;
int i = 0;
while (s1[i])
{
if (s1[i] != s2[i])
{
diff = ((s1[i] - '\0') - (s2[i] - '\0'));
break;
}
i++;
}
return (diff);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments passed into it
 * @argc: has the length of the arguments
 * @argv: has the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
if (**argc != '\0')
printf("%d\n", argc - 1);
return (0);
}

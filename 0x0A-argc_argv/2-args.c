#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments it receives
 * @argc: has the length of the arguments
 * @argv: has the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", *argv);
argv++;
}
return (0);
}

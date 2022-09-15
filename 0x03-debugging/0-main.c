#include "main.h"
#include <time.h>
/**
 * main - prints positive or negative integer
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0)); 
n = rand() - RAND_MAX / 2;
positive_or_negative(n);
return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0 (Success)
 */
int main(void)
{
int x;
unsigned long int y, z, n, ;
y = 1;
z = 2;
s = 0;
for (x = 1; x <= 33; ++x)
{
if (y < 4000000 && (y % 2) == 0)
{
s = s + y
}
n = y + z;
y = z;
z = n;
}
printf("%lu\n", s);
return (0);
}

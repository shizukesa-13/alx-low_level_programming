#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: ALways 0 (Success)
 */
int main(void)
{
unsigned long int x, y, z, yy, y², zz, z²;
y = 1;
z = 2;
printf("%lu", y);
for (x = 1; x < 91; x++)
{
printf(", %lu", x);
z = z + y;
y = z - y;
}
yy = j / 1000000000;
y² = j % 1000000000;
zz = k / 1000000000;
z² = k % 1000000000;
for (x = 92; x < 99; ++x)
{
printf(", %lu", zz + (z² / 1000000000));
printf("%lu", z² % 1000000000);
zz = zz + yy;
yy = zz - yy;
z² = z² + y²;
y² = z² - y²;
}
printf("\n");
return (0);
}

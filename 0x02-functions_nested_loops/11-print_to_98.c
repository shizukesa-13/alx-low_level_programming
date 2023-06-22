#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - adds two integers and returns the result
 * @x : The first printed number
 * Return: 0 (Success)
 */
void print_to_98(int x)
{
int y;
if (x <= 98)
{
for (y = x; y <= 98; y++)
{
printf("%d", y);
if (y != 98)
{
printf(", ");
}
}
}
else 
{
for (y = x; y >= 98; y--)
{
printf("%d", y);
if (y != 98)
{
printf(", ");
}
}
}
printf("\n");
}

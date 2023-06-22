#include "main.h"
/**
 * print_to_98 - adds two integers and returns the result
 * @x : The first printed number
 * Return: 0 (Success)
 */
void print_to_98(int x)
{
if (x <= 98)
{
while (x <= 98)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
if (x != 98)
{
_putchar(',');
_putchar(' ');
}
x++;
}
}
else 
{
while (x >= 98)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
if (x != 98)
{
_putchar(',');
_putchar(' ');
}
x--;
}
}
_putchar('\n');
}

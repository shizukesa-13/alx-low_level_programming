#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
int x, y, z;
x = 0;
y = size - 1;
while (x < size)
{
y = size - 1 - c;
z = x + 1;
while (y > 0)
{
_putchar(' ');
y--;
}
while (z > 0)
{
_putchar('#');
z--;
}
_putchar('\n');
z++;
}
if (size <= 0)
_putchar('\n');
}
